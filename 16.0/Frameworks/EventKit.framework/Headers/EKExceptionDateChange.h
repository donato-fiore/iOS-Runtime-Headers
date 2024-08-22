// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEXCEPTIONDATECHANGE_H
#define EKEXCEPTIONDATECHANGE_H

@class NSDate;
@protocol EKOwnerIDProviding;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKExceptionDateChange : EKObjectChange <EKOwnerIDProviding>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
-(id)initWithChangeProperties:(id)arg0 ;
-(id)owningEventInEventStore:(id)arg0 ;


@end


#endif