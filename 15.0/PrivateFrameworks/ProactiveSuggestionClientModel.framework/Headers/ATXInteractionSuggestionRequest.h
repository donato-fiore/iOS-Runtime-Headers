// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINTERACTIONSUGGESTIONREQUEST_H
#define ATXINTERACTIONSUGGESTIONREQUEST_H

@protocol NSSecureCoding, ATXProtoBufWrapper, ATXSuggestionExecutableProtocol;


#import "ATXSuggestionRequest.h"

@interface ATXInteractionSuggestionRequest : ATXSuggestionRequest <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSObject<ATXSuggestionExecutableProtocol> *psPredictionContext; // ivar: _psPredictionContext


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)archivePredictionContext;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatorId:(id)arg0 consumerSubType:(unsigned char)arg1 psPredictionContext:(id)arg2 ;
-(id)initWithOriginatorId:(id)arg0 consumerSubType:(unsigned char)arg1 psPredictionContext:(id)arg2 timeout:(CGFloat)arg3 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUUID:(id)arg0 originatorId:(id)arg1 consumerSubType:(unsigned char)arg2 psPredictionContext:(id)arg3 timeout:(CGFloat)arg4 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif