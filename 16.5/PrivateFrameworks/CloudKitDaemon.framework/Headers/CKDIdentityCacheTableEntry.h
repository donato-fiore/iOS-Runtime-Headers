// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDIDENTITYCACHETABLEENTRY_H
#define CKDIDENTITYCACHETABLEENTRY_H

@class CKSQLiteCacheTableEntry, NSString, CKUserIdentity, CKUserIdentityLookupInfo, NSNumber;



@interface CKDIdentityCacheTableEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) NSString *dataSeparationHash; // ivar: _dataSeparationHash
@property (retain, nonatomic) CKUserIdentity *identity; // ivar: _identity
@property (retain, nonatomic) CKUserIdentityLookupInfo *lookupInfo; // ivar: _lookupInfo
@property (retain, nonatomic) NSNumber *rowid; // ivar: _rowid




@end


#endif