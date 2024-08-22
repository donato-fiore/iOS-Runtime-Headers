// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPCONTENTKEYREQUEST_H
#define TVPCONTENTKEYREQUEST_H

@class NSDictionary, AVContentKeyRequest, NSDate, NSString, NSError, NSArray, NSURL, NSData, NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TVPContentKeySession.h"

@interface TVPContentKeyRequest : NSObject

@property (retain, nonatomic) NSDictionary *additionalRequestParams; // ivar: _additionalRequestParams
@property (retain, nonatomic) NSDictionary *additionalRequestParamsFromResponse; // ivar: _additionalRequestParamsFromResponse
@property (nonatomic) BOOL allowManualRenewal; // ivar: _allowManualRenewal
@property (readonly, nonatomic) AVContentKeyRequest *avContentKeyRequest; // ivar: _avContentKeyRequest
@property (retain, nonatomic) NSDate *availabilityEndDate; // ivar: _availabilityEndDate
@property (retain, nonatomic) NSString *contentID; // ivar: _contentID
@property (weak, nonatomic) TVPContentKeySession *contentKeySession; // ivar: _contentKeySession
@property (retain, nonatomic) id *context; // ivar: _context
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *eventReportingID; // ivar: _eventReportingID
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isLowValueKey; // ivar: _isLowValueKey
@property (nonatomic) BOOL isRenewal; // ivar: _isRenewal
@property (retain, nonatomic) NSArray *keyFormatVersions; // ivar: _keyFormatVersions
@property (retain, nonatomic) NSURL *keyIdentifier; // ivar: _keyIdentifier
@property (retain, nonatomic) NSData *keyRequestData; // ivar: _keyRequestData
@property (retain, nonatomic) NSData *keyResponseData; // ivar: _keyResponseData
@property (retain, nonatomic) NSData *offlineKeyData; // ivar: _offlineKeyData
@property (retain, nonatomic) NSNumber *playbackDuration; // ivar: _playbackDuration
@property (retain, nonatomic) NSDate *renewalDate; // ivar: _renewalDate
@property (retain, nonatomic) NSNumber *renewalInterval; // ivar: _renewalInterval
@property (retain, nonatomic) NSDate *requestEndDate; // ivar: _requestEndDate
@property (readonly, nonatomic) NSUInteger requestID; // ivar: _requestID
@property (retain, nonatomic) NSDate *requestStartDate; // ivar: _requestStartDate
@property (retain, nonatomic) NSData *secureInvalidationNonceData; // ivar: _secureInvalidationNonceData
@property (retain, nonatomic) NSDate *serverRequestStartDate; // ivar: _serverRequestStartDate
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo
@property (nonatomic) BOOL wantsOfflineKeysIfPossible; // ivar: _wantsOfflineKeysIfPossible


+(id)secureInvalidationRequestForIdentifier:(id)arg0 offlineKeyData:(id)arg1 additionalRequestParams:(id)arg2 contentID:(id)arg3 ;
+(void)initialize;
-(id)description;
-(id)initWithAVContentKeyRequest:(id)arg0 ;
-(id)offlineKeyDataFromServerKeyData:(id)arg0 error:(*id)arg1 ;
-(void)finish;
-(void)finishByRequestingOfflineKeysIfPossible;
-(void)makeKeyRequestDataForCertificateData:(id)arg0 assetIDData:(id)arg1 completion:(id)arg2 ;


@end


#endif