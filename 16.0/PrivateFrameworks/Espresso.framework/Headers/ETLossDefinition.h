// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETLOSSDEFINITION_H
#define ETLOSSDEFINITION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ETLossDefinition : NSObject

@property (readonly) NSString *inputName; // ivar: _inputName
@property (readonly) NSString *lossOutputName; // ivar: _lossOutputName
@property (readonly) NSUInteger mode; // ivar: _mode
@property (retain) NSString *outputName; // ivar: _outputName
@property (readonly) NSString *targetInputName; // ivar: _targetInputName


+(id)BuiltInLoss:(id)arg0 ;
+(id)L2LossWithInputName:(id)arg0 targetInputName:(id)arg1 lossOutputName:(id)arg2 ;
+(id)crossEntropyLossWithInputName:(id)arg0 targetInputName:(id)arg1 lossOutputName:(id)arg2 ;
-(id)initWithMode:(NSUInteger)arg0 inputName:(id)arg1 targetName:(id)arg2 lossOutputName:(id)arg3 ;


@end


#endif