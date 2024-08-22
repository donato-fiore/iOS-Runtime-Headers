// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPAUDIOROUTEPOLICYMANAGER_H
#define CPAUDIOROUTEPOLICYMANAGER_H

@class TURoute;
@protocol CPAudioRoutePolicyManager;

#import <Foundation/Foundation.h>


@interface CPAudioRoutePolicyManager : NSObject <CPAudioRoutePolicyManager>

 {
    ? observers;
    ? routeController;
}


@property (nonatomic, retain) TURoute *pickedRoute; // ivar: pickedRoute
@property (nonatomic, readonly) BOOL sharePlaySupported;


+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg0 withQueue:(id)arg1 ;
-(void)switchToSpeakerRouteIfNecessary;


@end


#endif