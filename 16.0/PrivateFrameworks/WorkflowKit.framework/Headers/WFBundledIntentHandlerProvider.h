// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBUNDLEDINTENTHANDLERPROVIDER_H
#define WFBUNDLEDINTENTHANDLERPROVIDER_H

@class NSString;
@protocol INCLocalExtending, INIntentHandlerProviding;

#import <Foundation/Foundation.h>


@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localExtensionIdentifier;
@property (readonly) Class superclass;


+(id)localIntentHandlerLaunchID;
+(id)sharedInstance;
-(id)handlerForIntent:(id)arg0 ;
-(id)init;


@end


#endif