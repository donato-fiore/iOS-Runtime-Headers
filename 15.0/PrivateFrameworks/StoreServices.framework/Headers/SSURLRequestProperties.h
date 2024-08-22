// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSURLREQUESTPROPERTIES_H
#define SSURLREQUESTPROPERTIES_H

@class NSDictionary, NSString, NSData, NSInputStream, NSArray, NSURL;
@protocol SSXPCCoding, NSSecureCoding, NSCopying, NSMutableCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSSecureCoding, NSCopying, NSMutableCopying>

 {
    NSDictionary *_additionalMetrics;
    NSInteger _allowedRetryCount;
    BOOL _allowsBootstrapCellularData;
    NSUInteger _cachePolicy;
    NSString *_clientAuditBundleIdentifier;
    NSData *_clientAuditTokenData;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSInteger _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    BOOL _isITunesStoreRequest;
    NSInteger _kbsyncType;
    BOOL _largeDownload;
    NSInteger _machineDataStyle;
    NSUInteger _networkServiceType;
    NSDictionary *_requestParameters;
    BOOL _requiresCellularDataNetwork;
    char _requiresExtendedValidationCertificates;
    BOOL _requiresExternal;
    BOOL _requiresHTTPS;
    BOOL _shouldDecodeResponse;
    BOOL _shouldDisableCellular;
    BOOL _shouldDisableCellularFallback;
    BOOL _shouldDisableReversePush;
    BOOL _shouldDisableReversePushSampling;
    BOOL _shouldProcessProtocol;
    BOOL _shouldSendSecureToken;
    BOOL _shouldSetCookies;
    CGFloat _timeoutInterval;
    NSString *_urlBagKey;
    NSInteger _urlBagType;
    id *_urlBagURLBlock;
    NSArray *_urls;
    NSArray *_userAgentComponents;
}


@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSDictionary *HTTPHeaders;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property (readonly) NSInteger KBSyncType;
@property (readonly, retain) NSURL *URL;
@property (readonly, copy) NSString *URLBagKey;
@property (readonly) NSInteger URLBagType;
@property (readonly, copy) id *URLBagURLBlock;
@property (readonly, copy) NSArray *URLs;
@property (readonly, copy) NSDictionary *additionalMetrics;
@property (readonly) NSInteger allowedRetryCount;
@property (readonly) BOOL allowsBootstrapCellularData;
@property (readonly) NSUInteger cachePolicy;
@property (readonly) BOOL canBeResolved;
@property (readonly, copy) NSString *clientAuditBundleIdentifier;
@property (readonly, copy) NSData *clientAuditTokenData;
@property (readonly) NSString *clientBundleIdentifier;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger expectedContentLength;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isLargeDownload) BOOL largeDownload;
@property (readonly) NSInteger machineDataStyle;
@property (readonly) NSUInteger networkServiceType;
@property (readonly, copy) NSDictionary *requestParameters;
@property (readonly) BOOL requiresCellularDataNetwork;
@property (readonly) BOOL requiresExtendedValidationCertificates;
@property (readonly) BOOL requiresExternal;
@property (readonly) BOOL requiresHTTPS;
@property (readonly) BOOL shouldAddKBSyncData;
@property (readonly) BOOL shouldDecodeResponse;
@property (readonly) BOOL shouldDisableCellular;
@property (readonly) BOOL shouldDisableCellularFallback;
@property (readonly) BOOL shouldDisableReversePush;
@property (readonly) BOOL shouldDisableReversePushSampling;
@property (readonly) BOOL shouldProcessProtocol;
@property (readonly) BOOL shouldSendSecureToken;
@property (readonly) BOOL shouldSetCookies;
@property (readonly) Class superclass;
@property (readonly) CGFloat timeoutInterval;
@property (readonly, copy) NSArray *userAgentComponents;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initCommon;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif