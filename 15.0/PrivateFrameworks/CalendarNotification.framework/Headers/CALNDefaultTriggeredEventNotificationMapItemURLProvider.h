// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNDEFAULTTRIGGEREDEVENTNOTIFICATIONMAPITEMURLPROVIDER_H
#define CALNDEFAULTTRIGGEREDEVENTNOTIFICATIONMAPITEMURLPROVIDER_H

@class NSString;
@protocol CALNTriggeredEventNotificationMapItemURLProvider;

#import <Foundation/Foundation.h>


@interface CALNDefaultTriggeredEventNotificationMapItemURLProvider : NSObject <CALNTriggeredEventNotificationMapItemURLProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_directionsModeForHypothesis:(id)arg0 routing:(id)arg1 ;
+(id)_directionsModeForLocationRoutingMode:(NSInteger)arg0 ;
+(id)_directionsModeForRouting:(id)arg0 ;
+(id)_directionsModeForTransportType:(int)arg0 ;
+(id)_eventLocationFromStructuredLocation:(id)arg0 ;
+(id)_mapItemNameFromEventLocation:(id)arg0 ;
+(id)_mapItemURLForEventLocation:(id)arg0 eventStartDate:(id)arg1 hypothesis:(id)arg2 ;
+(id)_mapItemURLLaunchOptionsForDirectionsMode:(id)arg0 eventDate:(id)arg1 isFromTimeToLeaveNotification:(BOOL)arg2 ;
+(id)_mapItemURLLaunchOptionsForHypothesis:(id)arg0 routing:(id)arg1 eventStartDate:(id)arg2 ;
+(id)sharedInstance;
-(id)mapItemURLForOptionalEventLocation:(id)arg0 eventStartDate:(id)arg1 hypothesis:(id)arg2 ;


@end


#endif