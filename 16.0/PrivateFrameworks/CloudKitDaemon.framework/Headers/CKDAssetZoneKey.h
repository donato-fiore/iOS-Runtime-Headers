// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDASSETZONEKEY_H
#define CKDASSETZONEKEY_H

@class CKRecordZoneID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKDAssetZoneKey : NSObject <NSCopying>



@property (nonatomic) NSInteger destinationDatabaseScope; // ivar: _destinationDatabaseScope
@property (retain, nonatomic) CKRecordZoneID *destinationZoneID; // ivar: _destinationZoneID
@property (readonly, nonatomic) BOOL isCrossOwner;
@property (nonatomic) NSInteger sourceDatabaseScope; // ivar: _sourceDatabaseScope
@property (retain, nonatomic) CKRecordZoneID *sourceZoneID; // ivar: _sourceZoneID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDestinationZoneID:(id)arg0 destinationDatabaseScope:(NSInteger)arg1 ;
-(id)initWithDestinationZoneID:(id)arg0 destinationDatabaseScope:(NSInteger)arg1 sourceZoneID:(id)arg2 sourceDatabaseScope:(NSInteger)arg3 ;


@end


#endif