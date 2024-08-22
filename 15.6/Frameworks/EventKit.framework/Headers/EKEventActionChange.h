// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTACTIONCHANGE_H
#define EKEVENTACTIONCHANGE_H

@protocol EKOwnerIDProviding;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKEventActionChange : EKObjectChange <EKOwnerIDProviding>



@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
+(void)fetchEventActionChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchEventActionChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchEventActionChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif