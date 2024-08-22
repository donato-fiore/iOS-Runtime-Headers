// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFCALLBACKDEFINITION_H
#define TFCALLBACKDEFINITION_H

@protocol TFDefinitionContainer;

#import <Foundation/Foundation.h>


@interface TFCallbackDefinition : NSObject

@property (readonly, nonatomic) id *callbackBlock; // ivar: _callbackBlock
@property (readonly, nonatomic) NSObject<TFDefinitionContainer> *privateContainer; // ivar: _privateContainer


// -(id)initWithCallbackBlock:(id)arg0 privateContainer:(unk)arg1  ;


@end


#endif