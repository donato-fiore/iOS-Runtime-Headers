// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MUSICUI31JSSUBSCRIPTIONSTATUSCOORDINATOR_H
#define _TTC7MUSICUI31JSSUBSCRIPTIONSTATUSCOORDINATOR_H

@class JSValue;
@protocol _TtP7MusicUIP33_D56FBB138E87ADB8253501AEC62E0AB937JSSubscriptionStatusCoordinatorExport_;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI31JSSubscriptionStatusCoordinator : NSObject <_TtP7MusicUIP33_D56FBB138E87ADB8253501AEC62E0AB937JSSubscriptionStatusCoordinatorExport_>

 {
    ? subscriptionStatusCoordinator;
}


@property (nonatomic, readonly) JSValue *subscriptionStatus;


-(id)fetch:(id)arg0 ;
-(id)init;
-(void)refreshSubscriptionStatus;


@end


#endif