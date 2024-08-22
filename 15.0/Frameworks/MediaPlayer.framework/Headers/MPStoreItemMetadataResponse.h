// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREITEMMETADATARESPONSE_H
#define MPSTOREITEMMETADATARESPONSE_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPStoreItemMetadataResponse : NSObject <NSCopying>

 {
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
    NSMutableArray *_allStoreItemDictionaries;
}


@property (readonly, copy, nonatomic) NSArray *allStoreItemDictionaries;
@property (copy, nonatomic) NSArray *cacheMissItemIdentifiers; // ivar: _cacheMissItemIdentifiers
@property (readonly, copy, nonatomic) NSDate *earliestExpirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse; // ivar: _finalResponse
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (copy, nonatomic) NSArray *lastBatchItemIdentifiers; // ivar: _lastBatchItemIdentifiers
@property (copy, nonatomic) NSArray *requestItemIdentifiers; // ivar: _requestItemIdentifiers


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)storeItemMetadataForItemIdentifier:(id)arg0 ;
-(id)storeItemMetadataForItemIdentifier:(id)arg0 returningIsFinalMetadata:(*BOOL)arg1 ;
-(void)setStoreItemMetadata:(id)arg0 forItemIdentifier:(id)arg1 ;


@end


#endif