// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKCIRCLEREQUESTPAYLOAD_H
#define AKCIRCLEREQUESTPAYLOAD_H

@class NSString, NSData, NSDictionary, AKPushMessage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKCircleRequestPayload : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) NSUInteger circleStep; // ivar: _circleStep
@property (nonatomic) NSInteger clientErrorCode; // ivar: _clientErrorCode
@property (retain, nonatomic) NSData *clientInfo; // ivar: _clientInfo
@property (retain, nonatomic) NSDictionary *responseInfo; // ivar: _responseInfo
@property (retain, nonatomic) AKPushMessage *responseMessage; // ivar: _responseMessage
@property (retain, nonatomic) NSString *serverInfo; // ivar: _serverInfo
@property (retain, nonatomic) NSString *transactionId; // ivar: _transactionId


+(BOOL)supportsSecureCoding;
+(id)payloadWithMessage:(id)arg0 ;
-(BOOL)isAcceptingPayload;
-(BOOL)isRequestingPayload;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)replyPayload;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif