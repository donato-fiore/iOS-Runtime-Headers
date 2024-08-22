// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKRECURRENCECHANGE_H
#define EKRECURRENCECHANGE_H

@protocol EKOwnerIDProviding;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKRecurrenceChange : EKObjectChange <EKOwnerIDProviding>



@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
+(void)fetchRecurrenceChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchRecurrenceChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchRecurrenceChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif