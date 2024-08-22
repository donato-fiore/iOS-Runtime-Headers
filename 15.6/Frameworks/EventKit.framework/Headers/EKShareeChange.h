// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKSHAREECHANGE_H
#define EKSHAREECHANGE_H

@protocol EKOwnerIDProviding;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKShareeChange : EKObjectChange <EKOwnerIDProviding>



@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
+(void)fetchShareeChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchShareeChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchShareeChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif