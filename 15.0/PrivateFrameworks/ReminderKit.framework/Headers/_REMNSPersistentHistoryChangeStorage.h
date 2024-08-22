// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REMNSPERSISTENTHISTORYCHANGESTORAGE_H
#define _REMNSPERSISTENTHISTORYCHANGESTORAGE_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMNSPersistentHistoryChangeTombstone.h"

@interface _REMNSPersistentHistoryChangeStorage : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger changeID; // ivar: _changeID
@property (nonatomic) NSInteger changeType; // ivar: _changeType
@property (copy, nonatomic) REMObjectID *changedObjectID; // ivar: _changedObjectID
@property (copy, nonatomic) REMNSPersistentHistoryChangeTombstone *tombstone; // ivar: _tombstone
@property (copy, nonatomic) NSSet *updatedProperties; // ivar: _updatedProperties


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif