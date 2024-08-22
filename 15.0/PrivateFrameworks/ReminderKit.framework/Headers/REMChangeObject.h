// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMCHANGEOBJECT_H
#define REMCHANGEOBJECT_H

@class NSSet;
@protocol NSCopying, NSSecureCoding, REMChangeCoalesceable;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMChangeTombstone.h"
#import "REMChangeTransaction.h"

@interface REMChangeObject : NSObject <NSCopying, NSSecureCoding, REMChangeCoalesceable>



@property (readonly, nonatomic) NSInteger changeID; // ivar: _changeID
@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) REMObjectID *changedObjectID; // ivar: _changedObjectID
@property (readonly, nonatomic) REMChangeTombstone *tombstone; // ivar: _tombstone
@property (readonly, weak, nonatomic) REMChangeTransaction *transaction; // ivar: _transaction
@property (readonly, nonatomic) NSSet *updatedProperties;


+(BOOL)supportsSecureCoding;
-(BOOL)isCoalesced;
-(BOOL)isEqual:(id)arg0 ;
-(id)coalescedChanges;
-(id)copyForCoalescing;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif