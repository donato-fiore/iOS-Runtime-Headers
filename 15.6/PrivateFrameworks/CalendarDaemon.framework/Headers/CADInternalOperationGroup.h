// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADINTERNALOPERATIONGROUP_H
#define CADINTERNALOPERATIONGROUP_H

@class NSString;
@protocol CADInternalInterface;


#import "CADOperationGroup.h"

@interface CADInternalOperationGroup : CADOperationGroup <CADInternalInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(BOOL)_internalAccessGranted;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg0 ;
-(void)CADInternalForceStatCollection:(id)arg0 ;
-(void)CADInternalRemoveConferenceLinkRenewalDate:(id)arg0 ;
-(void)CADInternalSetNextConferenceLinkRenewalToNow:(id)arg0 ;


@end


#endif