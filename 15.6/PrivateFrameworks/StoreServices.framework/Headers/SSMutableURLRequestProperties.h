// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMUTABLEURLREQUESTPROPERTIES_H
#define SSMUTABLEURLREQUESTPROPERTIES_H

@class NSData, NSInputStream, NSDictionary, NSString, NSURL, NSArray;


#import "SSURLRequestProperties.h"

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (copy) NSDictionary *HTTPHeaders;
@property (copy) NSString *HTTPMethod;
@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property NSInteger KBSyncType;
@property (retain) NSURL *URL;
@property (copy) NSString *URLBagKey;
@property NSInteger URLBagType;
@property (copy) id *URLBagURLBlock;
@property (copy) NSArray *URLs;
@property (copy) NSDictionary *additionalMetrics;
@property NSInteger allowedRetryCount;
@property BOOL allowsBootstrapCellularData;
@property NSUInteger cachePolicy;
@property (copy) NSString *clientAuditBundleIdentifier;
@property (copy) NSData *clientAuditTokenData;
@property (copy) NSString *clientIdentifier;
@property NSInteger expectedContentLength;
@property (getter=isLargeDownload) BOOL largeDownload;
@property NSInteger machineDataStyle;
@property NSUInteger networkServiceType;
@property (copy) NSDictionary *requestParameters;
@property BOOL requiresCellularDataNetwork;
@property BOOL requiresExtendedValidationCertificates;
@property BOOL requiresExternal;
@property BOOL requiresHTTPS;
@property BOOL shouldAddKBSyncData;
@property BOOL shouldDecodeResponse;
@property BOOL shouldDisableCellular;
@property BOOL shouldDisableCellularFallback;
@property BOOL shouldDisableReversePush;
@property BOOL shouldDisableReversePushSampling;
@property BOOL shouldProcessProtocol;
@property BOOL shouldSendSecureToken;
@property BOOL shouldSetCookies;
@property CGFloat timeoutInterval;
@property (copy) NSArray *userAgentComponents;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setMultiPartFormDataWithDictionary:(id)arg0 ;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;
-(void)setValue:(id)arg0 forRequestParameter:(id)arg1 ;


@end


#endif