// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMERGEABLEDELTAMETADATA_H
#define CKMERGEABLEDELTAMETADATA_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKDistributedTimestampStateVector.h"
#import "CKDistributedTimestampClockVector.h"

@interface CKMergeableDeltaMetadata : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CKDistributedTimestampStateVector *contentsVector; // ivar: _contentsVector
@property (readonly, nonatomic) CKDistributedTimestampClockVector *dependenciesVector; // ivar: _dependenciesVector
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CKDistributedTimestampClockVector *previousVector; // ivar: _previousVector
@property (readonly, nonatomic) CKDistributedTimestampStateVector *removalsVector; // ivar: _removalsVector
@property (copy, nonatomic) NSSet *replacedDeltaIdentifiers; // ivar: _replacedDeltaIdentifiers
@property (readonly, nonatomic) NSUInteger size;


+(BOOL)addToAttributedVector:(id)arg0 fromPVersionVector:(id)arg1 forSiteIdentifier:(id)arg2 error:(*id)arg3 ;
+(BOOL)mergeTimestamps:(id)arg0 intoDeltaMetadata:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)attributedVectorFromPDistributedTimestamps:(id)arg0 error:(*id)arg1 ;
+(id)deliverableDeltaMetadatasInDeltaSet:(id)arg0 withMergeableValueCurrentStateVector:(id)arg1 deliveryRequirements:(NSUInteger)arg2 ;
+(id)mergeableDeltaMetadataByCombiningMetadatas:(id)arg0 ;
+(id)pDistributedTimestampsFromAttributedVector:(id)arg0 ;
+(id)pDistributedTimestampsFromDeltaMetadata:(id)arg0 ;
+(id)pDistributedTimestampsWithPreviousVector:(id)arg0 contentsVector:(id)arg1 removalsVector:(id)arg2 dependenciesVector:(id)arg3 ;
+(id)pSiteIdentifierFromSiteIdentifier:(id)arg0 ;
+(id)pVersionVectorFromAttributedVector:(id)arg0 siteIdentifier:(id)arg1 ;
+(id)replacementDeltaMetadatasForDeltaDirectory:(id)arg0 withNextDeltaMetadata:(id)arg1 currentStateVector:(id)arg2 deltaDirectoryDeliveryRequirements:(NSUInteger)arg3 ;
+(id)siteIdentifierFromPSiteIdentifier:(id)arg0 ;
+(int)pClockTypeAndAtomStateFromClockType:(unsigned char)arg0 atomState:(unsigned char)arg1 ;
+(unsigned char)atomStateFromPClockTypeAndAtomState:(int)arg0 ;
+(unsigned char)clockTypeFromPClockTypeAndAtomState:(int)arg0 ;
-(BOOL)_isEquivalent:(id)arg0 ;
-(BOOL)_validate:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBatchMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)vectorsProtobufSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithStringSiteIdentifiers:(BOOL)arg0 usingSuperscripts:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 previousStateVector:(id)arg1 currentStateVector:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 previousVector:(id)arg1 contentsVector:(id)arg2 removalsVector:(id)arg3 dependenciesVector:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 previousVector:(id)arg1 contentsVector:(id)arg2 removalsVector:(id)arg3 dependenciesVector:(id)arg4 replacedDeltaIdentifiers:(id)arg5 ;
-(id)initWithPreviousStateVector:(id)arg0 currentStateVector:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif