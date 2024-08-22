// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDELETEDOBJECT_H
#define HKDELETEDOBJECT_H

@class NSUUID, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKDeletedObject : NSObject <NSSecureCoding>



@property (readonly) NSUUID *UUID; // ivar: _UUID
@property (nonatomic) NSInteger externalSyncObjectCode; // ivar: _externalSyncObjectCode
@property (copy) NSDictionary *metadata; // ivar: _metadata


+(BOOL)supportsSecureCoding;
+(id)_deletedObjectWithUUID:(id)arg0 metadata:(id)arg1 ;
+(id)_metadataWithSyncIdentifier:(id)arg0 syncVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif