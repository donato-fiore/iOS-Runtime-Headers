// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSPOTLIGHTOPERATIONGROUP_H
#define CADSPOTLIGHTOPERATIONGROUP_H



#import "CADOperationGroup.h"

@interface CADSpotlightOperationGroup : CADOperationGroup



+(BOOL)requiresEventAccess;
+(id)whitelistedBundles;
-(?)_gatherAllCalendarItemUUIDsInDatbase;
-(BOOL)accessGranted;
-(void)CADPushItemsToSpotlight:(id)arg0 reply:(id)arg1 ;
-(void)CADWaitForSpotlightUpdatesWithReply:(id)arg0 ;


@end


#endif