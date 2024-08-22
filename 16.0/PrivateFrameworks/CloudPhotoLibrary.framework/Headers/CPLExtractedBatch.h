// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLEXTRACTEDBATCH_H
#define CPLEXTRACTEDBATCH_H

@class NSDictionary, NSMutableDictionary, NSSet, NSMutableSet, NSString;
@protocol NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "CPLChangeBatch.h"

@interface CPLExtractedBatch : NSObject <NSSecureCoding>

 {
    NSDictionary *_pushContexts;
    NSMutableDictionary *_mutablePushContexts;
    NSSet *_untrustableScopedIdentifiers;
    NSMutableSet *_mutableUntrustableScopedIndentifiers;
    BOOL _resourceSizeIsCalculated;
}


@property (readonly, nonatomic) CPLChangeBatch *batch; // ivar: _batch
@property (readonly, nonatomic) BOOL batchCanLowerQuota; // ivar: _batchCanLowerQuota
@property (copy, nonatomic) NSString *clientCacheIdentifier; // ivar: _clientCacheIdentifier
@property (nonatomic, getter=isFull) BOOL full; // ivar: _full
@property (readonly, nonatomic) NSUInteger resourceSize; // ivar: _resourceSize
@property (readonly, nonatomic) NSObject<NSFastEnumeration> *uploadIdentifiers;


+(BOOL)supportsSecureCoding;
-(NSUInteger)effectiveResourceSizeToUploadUsingStorage:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)uploadIdentifierForChange:(id)arg0 ;
-(void)addChange:(id)arg0 fromStorage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumeratePushContextsWithBlock:(id)arg0 ;
-(void)forceScopeIndexOnAllRecordsTo:(NSInteger)arg0 ;


@end


#endif