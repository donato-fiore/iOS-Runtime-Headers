// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPENDNETWORKSEARCHFEEDBACK_H
#define _CPENDNETWORKSEARCHFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPFeedbackUUID, _CPEndNetworkSearchFeedback, NSSecureCoding;


#import "_CPNetworkTimingData.h"

@interface _CPEndNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndNetworkSearchFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger decompressedResponseSize; // ivar: _decompressedResponseSize
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) int endpointType; // ivar: _endpointType
@property (copy, nonatomic) NSString *fbq; // ivar: _fbq
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *parsecStatus; // ivar: _parsecStatus
@property (copy, nonatomic) NSString *partialClientIp; // ivar: _partialClientIp
@property (nonatomic) NSUInteger rawResponseSize; // ivar: _rawResponseSize
@property (nonatomic) NSInteger responseSize; // ivar: _responseSize
@property (nonatomic) int statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (retain, nonatomic) _CPNetworkTimingData *timingData; // ivar: _timingData
@property (readonly, copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithStartSearch:(id)arg0 responseSize:(NSInteger)arg1 statusCode:(NSInteger)arg2 parsecStatus:(id)arg3 parsecDuration:(CGFloat)arg4 fbq:(id)arg5 partialClientIp:(id)arg6 networkTimingData:(id)arg7 ;
-(void)writeTo:(id)arg0 ;


@end


#endif