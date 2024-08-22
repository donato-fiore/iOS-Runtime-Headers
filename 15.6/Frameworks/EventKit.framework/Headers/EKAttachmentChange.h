// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKATTACHMENTCHANGE_H
#define EKATTACHMENTCHANGE_H

@protocol EKOwnerIDProviding;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKAttachmentChange : EKObjectChange <EKOwnerIDProviding>



@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
+(void)fetchAttachmentChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchAttachmentChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchAttachmentChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif