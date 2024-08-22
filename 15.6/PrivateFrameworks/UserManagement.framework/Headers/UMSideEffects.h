// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMSIDEEFFECTS_H
#define UMSIDEEFFECTS_H

@class NSString;
@protocol UMSideEffectsProviding, UMLibInfoProviding;

#import <Foundation/Foundation.h>


@interface UMSideEffects : NSObject <UMSideEffectsProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<UMLibInfoProviding> *libInfo; // ivar: _libInfo
@property (readonly) Class superclass;




@end


#endif