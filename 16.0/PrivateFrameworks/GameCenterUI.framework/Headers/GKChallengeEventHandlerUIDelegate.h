// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCHALLENGEEVENTHANDLERUIDELEGATE_H
#define GKCHALLENGEEVENTHANDLERUIDELEGATE_H

@class NSString;
@protocol GKChallengeEventHandlerUIDelegate;

#import <Foundation/Foundation.h>


@interface GKChallengeEventHandlerUIDelegate : NSObject <GKChallengeEventHandlerUIDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)showLocallyCompletedBannerForIssuingPlayer:(id)arg0 challenge:(id)arg1 handler:(id)arg2 ;
-(void)showReceivedBannerForIssuingPlayer:(id)arg0 challenge:(id)arg1 handler:(id)arg2 ;
-(void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg0 challenge:(id)arg1 handler:(id)arg2 ;


@end


#endif