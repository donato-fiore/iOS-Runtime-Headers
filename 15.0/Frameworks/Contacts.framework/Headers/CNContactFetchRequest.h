// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTFETCHREQUEST_H
#define CNCONTACTFETCHREQUEST_H

@class NSArray, NSPredicate;
@protocol NSSecureCoding;


#import "CNFetchRequest.h"

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding>



@property (nonatomic) BOOL allowsBatching; // ivar: _allowsBatching
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSUInteger decoderBatchSize; // ivar: _decoderBatchSize
@property (nonatomic) BOOL disallowsEncodedFetch; // ivar: _disallowsEncodedFetch
@property (copy, nonatomic) NSArray *keysToFetch; // ivar: _keysToFetch
@property (nonatomic) BOOL mutableObjects; // ivar: _mutableObjects
@property (nonatomic) BOOL onlyMainStore; // ivar: _onlyMainStore
@property (copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) BOOL rankSort; // ivar: _rankSort
@property (readonly) NSUInteger serialNumber; // ivar: _serialNumber
@property (nonatomic) BOOL shouldFailIfAccountNotYetSynced; // ivar: _shouldFailIfAccountNotYetSynced
@property (nonatomic) NSInteger sortOrder; // ivar: _sortOrder
@property (nonatomic) BOOL unifyResults; // ivar: _unifyResults


+(BOOL)supportsSecureCoding;
+(NSUInteger)makeSerialNumber;
-(BOOL)requiresMeContactAuthorization;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectiveKeysToFetch;
-(id)effectivePredicate;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeysToFetch:(id)arg0 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif