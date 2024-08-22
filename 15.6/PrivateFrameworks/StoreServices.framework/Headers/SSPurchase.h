// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPURCHASE_H
#define SSPURCHASE_H

@class NSNumber, NSString, NSMutableDictionary, NSArray, NSDictionary, NSData;
@protocol SSXPCCoding, NSSecureCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSDownloadPolicy.h"
#import "SSItem.h"
#import "SSItemOffer.h"
#import "SSNetworkConstraints.h"
#import "SSURLRequestProperties.h"

@interface SSPurchase : NSObject <SSXPCCoding, NSSecureCoding, NSCopying>

 {
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    BOOL _backgroundPurchase;
    NSInteger _batchIdentifier;
    NSString *_buyParameters;
    NSNumber *_buyParamsCreatesDownloads;
    NSNumber *_buyParamsCreatesInstallJobs;
    NSNumber *_buyParamsCreatesJobs;
    BOOL _createsDownloads;
    BOOL _createsJobs;
    BOOL _createsInstallJobs;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _displaysOnLockScreen;
    SSDownloadPolicy *_downloadPolicy;
    NSMutableDictionary *_downloadProperties;
    NSNumber *_enabledServiceType;
    NSInteger _expectedDownloadFileSize;
    NSArray *_filteredAssetTypes;
    NSArray *_gratisIdentifiers;
    BOOL _ignoresForcedPasswordRestriction;
    SSItem *_item;
    SSItemOffer *_itemOffer;
    SSNetworkConstraints *_networkConstraints;
    NSNumber *_ownerAccountDSID;
    NSInteger _placeholderDownloadIdentifier;
    BOOL _playbackRequest;
    BOOL _preauthenticated;
    SSURLRequestProperties *_requestProperties;
    id *_requiredDeviceCapabilities;
    NSDictionary *_tidHeaders;
    NSInteger _uniqueIdentifier;
    BOOL _usesLocalRedownloadParametersIfPossible;
}


@property (retain) NSNumber *accountIdentifier;
@property (copy) NSString *affiliateIdentifier;
@property (getter=isBackgroundPurchase) BOOL backgroundPurchase;
@property NSInteger batchIdentifier;
@property (copy) NSString *buyParameters;
@property (nonatomic) BOOL createsDownloads;
@property (nonatomic) BOOL createsInstallJobs;
@property (nonatomic) BOOL createsJobs;
@property (readonly) NSData *databaseEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL displaysOnLockScreen;
@property (copy) SSDownloadPolicy *downloadPolicy;
@property (copy) NSDictionary *downloadProperties;
@property (copy) NSNumber *enabledServiceType;
@property NSInteger expectedDownloadFileSize;
@property (copy) NSArray *filteredAssetTypes;
@property (copy) NSArray *gratisIdentifiers;
@property (readonly, getter=isGratisSoftwareClaim) BOOL gratisSoftwareClaim;
@property (readonly) NSUInteger hash;
@property BOOL ignoresForcedPasswordRestriction;
@property (copy) SSNetworkConstraints *networkConstraints;
@property (retain) NSNumber *ownerAccountDSID;
@property NSInteger placeholderDownloadIdentifier;
@property (getter=isPlaybackRequest) BOOL playbackRequest;
@property (getter=isPreauthenticated) BOOL preauthenticated;
@property (copy) SSURLRequestProperties *requestProperties;
@property (copy) id *requiredDeviceCapabilities;
@property (nonatomic) BOOL skipSoftwareAccountPreflight; // ivar: _skipSoftwareAccountPreflight
@property (readonly) Class superclass;
@property (copy) NSDictionary *tidHeaders;
@property NSInteger uniqueIdentifier;
@property BOOL usesLocalRedownloadParametersIfPossible;


+(BOOL)supportsSecureCoding;
+(id)newPurchaseWithDatabaseEncoding:(id)arg0 ;
+(id)newPurchaseWithXPCEncoding:(id)arg0 ;
+(id)purchaseWithBuyParameters:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_buyParametersValueForKey:(id)arg0 fromBuyParams:(id)arg1 ;
-(id)_initSSPurchase;
-(id)buyParametersValueForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)downloadMetadata;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatabaseEncoding:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(id)initWithItem:(id)arg0 offer:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)item;
-(id)itemOffer;
-(id)valueForDownloadProperty:(id)arg0 ;
-(void)_addEntriesToDatabaseEncoding:(id)arg0 ;
-(void)_setValuesUsingDatabaseEncoding:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaultUserAgent:(id)arg0 ;
-(void)setDownloadMetadata:(id)arg0 ;
-(void)setValue:(id)arg0 forDownloadProperty:(id)arg1 ;


@end


#endif