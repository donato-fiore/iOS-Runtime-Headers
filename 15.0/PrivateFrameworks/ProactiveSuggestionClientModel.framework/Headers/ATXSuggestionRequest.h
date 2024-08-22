// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSUGGESTIONREQUEST_H
#define ATXSUGGESTIONREQUEST_H

@class NSString, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXSuggestionRequest : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) NSString *originatorId; // ivar: _originatorId
@property (readonly, nonatomic) NSUUID *requestUUID; // ivar: _requestUUID
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUUID:(id)arg0 originatorId:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(id)initWithUUID:(id)arg0 originatorId:(id)arg1 consumerSubType:(unsigned char)arg2 timeout:(CGFloat)arg3 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif