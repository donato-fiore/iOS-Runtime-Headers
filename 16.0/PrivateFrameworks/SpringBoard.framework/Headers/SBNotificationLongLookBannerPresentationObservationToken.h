// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNOTIFICATIONLONGLOOKBANNERPRESENTATIONOBSERVATIONTOKEN_H
#define SBNOTIFICATIONLONGLOOKBANNERPRESENTATIONOBSERVATIONTOKEN_H

@class NSString;
@protocol SBNotificationBannerDestinationObserver;


#import "SBPresentationObservationToken.h"
#import "SBNotificationBannerDestination.h"

@interface SBNotificationLongLookBannerPresentationObservationToken : SBPresentationObservationToken <SBNotificationBannerDestinationObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBNotificationBannerDestination *notificationBannerDestination; // ivar: _notificationBannerDestination
@property (readonly) Class superclass;


-(NSInteger)state;
-(id)initWithNotificationBannerDestination:(id)arg0 scene:(id)arg1 ;
-(void)dealloc;
-(void)notificationBannerDestinationDidDismissLongLook:(id)arg0 ;
-(void)notificationBannerDestinationDidPresentLongLook:(id)arg0 ;
-(void)notificationBannerDestinationWillDismissLongLook:(id)arg0 ;
-(void)notificationBannerDestinationWillPresentLongLook:(id)arg0 ;


@end


#endif