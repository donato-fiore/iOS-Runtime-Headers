// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDRECORDCACHEENTRY_H
#define CKDRECORDCACHEENTRY_H

@class CKSQLiteCacheTableEntry, NSNumber, NSString, NSSet, NSDate, NSData;



@interface CKDRecordCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *databaseScope; // ivar: _databaseScope
@property (retain, nonatomic) NSString *dsid; // ivar: _dsid
@property (retain, nonatomic) NSNumber *environment; // ivar: _environment
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSSet *knownUserKeys; // ivar: _knownUserKeys
@property (retain, nonatomic) NSDate *modificationTime; // ivar: _modificationTime
@property (retain, nonatomic) NSData *recordData; // ivar: _recordData
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain, nonatomic) NSString *rowID; // ivar: _rowID
@property (retain, nonatomic) NSNumber *size; // ivar: _size
@property (retain, nonatomic) NSString *zoneIdentifier; // ivar: _zoneIdentifier


-(id)description;


@end


#endif