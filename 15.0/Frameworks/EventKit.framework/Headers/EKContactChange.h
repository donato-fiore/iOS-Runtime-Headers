// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCONTACTCHANGE_H
#define EKCONTACTCHANGE_H

@protocol EKOwnerIDProviding;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKContactChange : EKObjectChange <EKOwnerIDProviding>



@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
+(void)fetchContactChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchContactChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchContactChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif