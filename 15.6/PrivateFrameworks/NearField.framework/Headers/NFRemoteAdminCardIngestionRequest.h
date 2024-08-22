// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFREMOTEADMINCARDINGESTIONREQUEST_H
#define NFREMOTEADMINCARDINGESTIONREQUEST_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFRemoteAdminCardIngestionRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *cardServiceInfo; // ivar: _cardServiceInfo
@property (nonatomic) NSUInteger maxDetectionTimeout; // ivar: _maxDetectionTimeout
@property (retain, nonatomic) NSString *serverIdentifier; // ivar: _serverIdentifier
@property (retain, nonatomic) NSString *sessionToken; // ivar: _sessionToken
@property (retain, nonatomic) NSString *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
+(id)cardIngestionRequestWithServerIdentifier:(id)arg0 sessionToken:(id)arg1 readerModeMetadata:(id)arg2 maxDetectionTimeout:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif