// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONARCHIVE_H
#define PKPAYMENTTRANSACTIONARCHIVE_H

@class NSSet, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionArchive : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSSet *locations; // ivar: _locations
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)allArchiveLocationsWithType:(NSUInteger)arg0 areArchived:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArchive:(id)arg0 ;
-(NSUInteger)hash;
-(id)archiveLocationMatchingLocation:(id)arg0 ;
-(id)archiveLocationsWithCloudStoreZone:(id)arg0 isArchived:(BOOL)arg1 ;
-(id)archiveLocationsWithType:(NSUInteger)arg0 isArchived:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertOrUpdateArchiveLocationWithCloudStoreZone:(id)arg0 isArchived:(BOOL)arg1 insertionMode:(NSUInteger)arg2 ;
-(void)updateArchiveLocationsWithType:(NSUInteger)arg0 isArchived:(BOOL)arg1 ;
-(void)updateTransactionArchiveLocationsWithArchive:(id)arg0 type:(NSUInteger)arg1 archived:(BOOL)arg2 ;


@end


#endif