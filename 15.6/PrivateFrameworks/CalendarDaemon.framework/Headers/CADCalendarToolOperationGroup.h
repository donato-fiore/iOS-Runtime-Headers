// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADCALENDARTOOLOPERATIONGROUP_H
#define CADCALENDARTOOLOPERATIONGROUP_H

@class NSString;
@protocol CADCalendarToolInterface;


#import "CADOperationGroup.h"

@interface CADCalendarToolOperationGroup : CADOperationGroup <CADCalendarToolInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg0 ;
-(void)CADPostSyntheticRouteHypothesis:(id)arg0 forEventWithExternalURL:(id)arg1 reply:(id)arg2 ;
-(void)CADPurgeChangeTrackingReply:(id)arg0 ;


@end


#endif