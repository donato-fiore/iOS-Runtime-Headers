// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLMULTILABELESPRESSOCLASSIFIER_H
#define PMLMULTILABELESPRESSOCLASSIFIER_H

@class NSString;
@protocol PMLMultiLabelClassifierProtocol;

#import <Foundation/Foundation.h>


@interface PMLMultiLabelEspressoClassifier : NSObject <PMLMultiLabelClassifierProtocol>

 {
    ? _espressoModel;
    *void _espressoPlan;
    *void _espressoContext;
    NSUInteger _outputNumReplyClasses;
    NSUInteger _inputNumParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)getNumParametersFromShape:(NSUInteger)arg0 rank:(NSUInteger)arg1 ;
+(id)classifierWithEspressoModelFile:(id)arg0 ;
+(id)makeStringForShape:(NSUInteger)arg0 ;
-(NSUInteger)outputDimension;
-(id)initWithEspressoContext:(*void)arg0 espressoPlan:(*void)arg1 espressoModel:(struct ? )arg2 inputNumParameters:(NSUInteger)arg3 outputNumReplyClasses:(NSUInteger)arg4 ;
-(id)predict:(id)arg0 ;
-(void)dealloc;


@end


#endif