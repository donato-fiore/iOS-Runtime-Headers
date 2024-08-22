// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKITFENCINGPROVIDER_H
#define _UIKITFENCINGPROVIDER_H

@class NSString;
@protocol FBFencingProvider;

#import <Foundation/Foundation.h>


@interface _UIKitFencingProvider : NSObject <FBFencingProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)systemAnimationFenceExemptQueue;
-(void)synchronizeDrawingWithFence:(id)arg0 ;


@end


#endif