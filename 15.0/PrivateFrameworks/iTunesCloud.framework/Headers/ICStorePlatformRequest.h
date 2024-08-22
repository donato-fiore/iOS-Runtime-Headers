// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSTOREPLATFORMREQUEST_H
#define ICSTOREPLATFORMREQUEST_H

@class NSDictionary, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICStorePlatformRequest : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *HTTPHeaders;
@property (copy, nonatomic) id *batchResultsHandler; // ivar: _batchResultsHandler
@property (nonatomic) NSInteger batchSize; // ivar: _batchSize
@property (copy, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (copy, nonatomic) NSString *clientBundleVersion; // ivar: _clientBundleVersion
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *imageProfile; // ivar: _imageProfile
@property (copy, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (copy, nonatomic) NSString *keyProfile; // ivar: _keyProfile
@property (nonatomic) NSInteger personalizationStyle; // ivar: _personalizationStyle
@property (copy, nonatomic) NSString *platformIdentifier; // ivar: _platformIdentifier
@property (copy, nonatomic) NSString *protocolVersion; // ivar: _protocolVersion
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, copy, nonatomic) NSArray *queryItems;
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (nonatomic) CGFloat retryDelay; // ivar: _retryDelay
@property (nonatomic) BOOL returnsLocalEquivalencies; // ivar: _returnsLocalEquivalencies
@property (nonatomic) BOOL shouldIgnoreCache; // ivar: _shouldIgnoreCache
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


-(id)copyWithItemIdentifiersInRange:(struct _NSRange )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)performWithResponseHandler:(id)arg0 ;


@end


#endif