// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCERTIFIEDDELIVERYCONTEXT_H
#define IDSCERTIFIEDDELIVERYCONTEXT_H

@class NSData, NSDictionary, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IDSCertifiedDeliveryReplayKey.h"

@interface IDSCertifiedDeliveryContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *certifiedDeliveryRTS; // ivar: _certifiedDeliveryRTS
@property (readonly, nonatomic) NSInteger certifiedDeliveryVersion; // ivar: _certifiedDeliveryVersion
@property (retain, nonatomic) NSDictionary *deliveryStatusContext; // ivar: _deliveryStatusContext
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSNumber *failureReason; // ivar: _failureReason
@property (retain, nonatomic) NSString *failureReasonMessage; // ivar: _failureReasonMessage
@property (nonatomic) BOOL generateDeliveryReceipt; // ivar: _generateDeliveryReceipt
@property (readonly, nonatomic) NSString *localURI; // ivar: _localURI
@property (readonly, nonatomic) NSString *originalGUID; // ivar: _originalGUID
@property (readonly, nonatomic) NSData *queryHash; // ivar: _queryHash
@property (readonly, nonatomic) NSString *remoteURI; // ivar: _remoteURI
@property (readonly, nonatomic) IDSCertifiedDeliveryReplayKey *replayKey; // ivar: _replayKey
@property (readonly, nonatomic) NSData *senderToken; // ivar: _senderToken
@property (readonly, nonatomic) NSString *service; // ivar: _service


+(BOOL)supportsSecureCoding;
-(id)dataRepresentation;
-(id)description;
-(id)initWithCertifiedDeliveryContext:(id)arg0 queryHash:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithGUID:(id)arg0 service:(id)arg1 certifiedDeliveryVersion:(NSInteger)arg2 certifiedDeliveryRTS:(id)arg3 senderToken:(id)arg4 ;
-(id)initWithGUID:(id)arg0 service:(id)arg1 certifiedDeliveryVersion:(NSInteger)arg2 certifiedDeliveryRTS:(id)arg3 senderToken:(id)arg4 failureReason:(id)arg5 failureReasonMessage:(id)arg6 ;
-(id)initWithGUID:(id)arg0 service:(id)arg1 certifiedDeliveryVersion:(NSInteger)arg2 certifiedDeliveryRTS:(id)arg3 senderToken:(id)arg4 failureReason:(id)arg5 failureReasonMessage:(id)arg6 replayKey:(id)arg7 generateDeliveryReceipt:(BOOL)arg8 deliveryStatusContext:(id)arg9 localURI:(id)arg10 remoteURI:(id)arg11 queryHash:(id)arg12 ;
-(id)initWithGUID:(id)arg0 service:(id)arg1 certifiedDeliveryVersion:(NSInteger)arg2 certifiedDeliveryRTS:(id)arg3 senderToken:(id)arg4 localURI:(id)arg5 remoteURI:(id)arg6 ;
-(id)initWithGUID:(id)arg0 service:(id)arg1 certifiedDeliveryVersion:(NSInteger)arg2 certifiedDeliveryRTS:(id)arg3 senderToken:(id)arg4 localURI:(id)arg5 remoteURI:(id)arg6 replayKey:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif