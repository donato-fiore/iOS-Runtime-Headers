// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTOREITEMMETADATAREQUEST_H
#define MPSTOREITEMMETADATAREQUEST_H

@class NSString, ICClientInfo, ICUserIdentity, NSArray, ICStorePlatformRequest, NSNumber, ICUserIdentityStore;

#import <Foundation/Foundation.h>


@interface MPStoreItemMetadataRequest : NSObject

@property (nonatomic) BOOL allowLocalEquivalencies; // ivar: _allowLocalEquivalencies
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) ICClientInfo *clientInfo; // ivar: _clientInfo
@property (copy, nonatomic) ICUserIdentity *delegatedUserIdentity; // ivar: _delegatedUserIdentity
@property (copy, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (nonatomic) NSInteger personalizationStyle; // ivar: _personalizationStyle
@property (readonly, nonatomic, getter=isPersonalized) BOOL personalized;
@property (copy, nonatomic) NSString *platform; // ivar: _platform
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (nonatomic) CGFloat retryDelay; // ivar: _retryDelay
@property (nonatomic) BOOL shouldIgnoreCache; // ivar: _shouldIgnoreCache
@property (nonatomic) BOOL shouldIgnoreExpiration; // ivar: _shouldIgnoreExpiration
@property (nonatomic) BOOL shouldRequireCachedResults; // ivar: _shouldRequireCachedResults
@property (readonly, copy, nonatomic) ICStorePlatformRequest *storePlatformRequest;
@property (copy, nonatomic) NSNumber *timeoutInterval; // ivar: _timeoutInterval
@property (copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity
@property (retain, nonatomic) ICUserIdentityStore *userIdentityStore; // ivar: _userIdentityStore


-(id)init;


@end


#endif