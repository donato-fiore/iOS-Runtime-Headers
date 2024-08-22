// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPCLOUDCONTAINERCACHE_H
#define MSPCLOUDCONTAINERCACHE_H

@class NSString, NSDictionary, NSSet, CKServerChangeToken, NSMutableDictionary, NSMutableSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSPCloudContainerCache : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger accountEnvironment; // ivar: _accountEnvironment
@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *cacheName; // ivar: _cacheName
@property (retain, nonatomic) NSDictionary *cachedRecords; // ivar: _cachedRecords
@property (retain, nonatomic) NSSet *cachedTombstoneRecords; // ivar: _cachedTombstoneRecords
@property (retain, nonatomic) CKServerChangeToken *serverToken; // ivar: _serverToken
@property (retain, nonatomic) NSMutableDictionary *stagedRecords; // ivar: _stagedRecords
@property (retain, nonatomic) NSMutableSet *stagedTombstones; // ivar: _stagedTombstones


+(BOOL)supportsSecureCoding;
-(BOOL)hasRecord:(id)arg0 withIdentifier:(id)arg1 ;
-(id)cacheURL;
-(id)cachedRecordForIdentifier:(id)arg0 ;
-(id)cachedRecordForRecord:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 accountIdentifier:(id)arg1 ;
-(id)initWithName:(id)arg0 accountIdentifier:(id)arg1 accountEnvironment:(NSInteger)arg2 ;
-(void)addRecord:(id)arg0 withIdentifier:(id)arg1 ;
-(void)addRecordsFromChangeSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)load;
-(void)merge;
-(void)reset;
-(void)save;


@end


#endif