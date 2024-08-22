// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFOBJECTDATABASEID_H
#define MKFOBJECTDATABASEID_H

@class HMFObject, NSManagedObjectID;



@interface MKFObjectDatabaseID : HMFObject

@property (readonly, copy) NSManagedObjectID *objectID; // ivar: _objectID


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithMKFObject:(id)arg0 ;


@end


#endif