// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKALARMCHANGE_H
#define EKALARMCHANGE_H

@protocol EKOwnerIDProviding;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKAlarmChange : EKObjectChange <EKOwnerIDProviding>



@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
+(void)fetchAlarmChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchAlarmChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchAlarmChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif