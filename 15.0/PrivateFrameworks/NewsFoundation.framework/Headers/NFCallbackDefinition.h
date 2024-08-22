// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCALLBACKDEFINITION_H
#define NFCALLBACKDEFINITION_H

@protocol NFDefinitionContainer;

#import <Foundation/Foundation.h>


@interface NFCallbackDefinition : NSObject

@property (readonly, nonatomic) id *callbackBlock; // ivar: _callbackBlock
@property (readonly, nonatomic) NSObject<NFDefinitionContainer> *privateContainer; // ivar: _privateContainer


// -(id)initWithCallbackBlock:(id)arg0 privateContainer:(unk)arg1  ;


@end


#endif