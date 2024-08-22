// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONCLIENTMODELSPECIFICATION_H
#define ATXPROACTIVESUGGESTIONCLIENTMODELSPECIFICATION_H

@class NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionClientModelSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>



@property (readonly, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (readonly, nonatomic) NSString *clientModelVersion; // ivar: _clientModelVersion
@property (readonly, nonatomic) NSUInteger engagementResetPolicy; // ivar: _engagementResetPolicy


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)fuzzyIsEqualToClientModelSpecification:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithClientModelId:(id)arg0 clientModelVersion:(id)arg1 ;
-(id)initWithClientModelId:(id)arg0 clientModelVersion:(id)arg1 engagementResetPolicy:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif