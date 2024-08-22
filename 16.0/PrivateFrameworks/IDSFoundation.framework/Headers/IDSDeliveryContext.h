// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSDELIVERYCONTEXT_H
#define IDSDELIVERYCONTEXT_H

@class NSNumber, NSError, NSString, NSArray, NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface IDSDeliveryContext : NSObject

@property (copy, nonatomic) NSNumber *currentAverageRTT; // ivar: _currentAverageRTT
@property (copy, nonatomic) NSError *deliveryError; // ivar: _deliveryError
@property (copy, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (copy, nonatomic) NSArray *displayIDs; // ivar: _displayIDs
@property (copy, nonatomic) NSNumber *endpointState; // ivar: _endpointState
@property (copy, nonatomic) NSNumber *failureReason; // ivar: _failureReason
@property (nonatomic) NSInteger idsResponseCode; // ivar: _idsResponseCode
@property (copy, nonatomic) NSNumber *isDeviceBlackedOut; // ivar: _isDeviceBlackedOut
@property (nonatomic) BOOL lastCall; // ivar: _lastCall
@property (nonatomic) BOOL lastCourierAck; // ivar: _lastCourierAck
@property (copy, nonatomic) NSNumber *localMessageState; // ivar: _localMessageState
@property (nonatomic) NSInteger responseCode; // ivar: _responseCode
@property (copy, nonatomic) NSNumber *responseCommand; // ivar: _responseCommand
@property (copy, nonatomic) NSError *responseError; // ivar: _responseError
@property (copy, nonatomic) NSNumber *responseTimeStamp; // ivar: _responseTimeStamp
@property (copy, nonatomic) NSData *responseToken; // ivar: _responseToken
@property (copy, nonatomic) NSNumber *wpConnectionErrorCode; // ivar: _wpConnectionErrorCode
@property (copy, nonatomic) NSString *wpConnectionErrorDomain; // ivar: _wpConnectionErrorDomain
@property (copy, nonatomic) NSDictionary *wpConnectionErrorUserInfo; // ivar: _wpConnectionErrorUserInfo


+(NSInteger)_endpointStateForServerDeliveryStatus:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithResponseCode:(NSInteger)arg0 deviceID:(id)arg1 ;
-(id)initWithResponseCode:(NSInteger)arg0 deviceID:(id)arg1 currentAverageRTT:(id)arg2 isDeviceBlackedOut:(id)arg3 localMessageState:(id)arg4 ;
-(id)initWithResponseCode:(NSInteger)arg0 error:(id)arg1 lastCall:(BOOL)arg2 ;
-(id)initWithServerResponseDictionary:(id)arg0 ;


@end


#endif