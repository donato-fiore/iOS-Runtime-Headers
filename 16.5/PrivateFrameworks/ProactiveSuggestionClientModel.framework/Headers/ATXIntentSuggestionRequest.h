// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINTENTSUGGESTIONREQUEST_H
#define ATXINTENTSUGGESTIONREQUEST_H

@class NSArray, NSNumber;


#import "ATXSuggestionRequest.h"

@interface ATXIntentSuggestionRequest : ATXSuggestionRequest

@property (readonly, nonatomic) NSArray *bundleIds; // ivar: _bundleIds
@property (readonly, nonatomic) NSArray *intentClassNames; // ivar: _intentClassNames
@property (readonly, nonatomic) NSNumber *limit; // ivar: _limit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatorId:(id)arg0 consumerSubType:(unsigned char)arg1 bundleIds:(id)arg2 intentClassNames:(id)arg3 limit:(id)arg4 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUUID:(id)arg0 originatorId:(id)arg1 consumerSubType:(unsigned char)arg2 bundleIds:(id)arg3 intentClassNames:(id)arg4 limit:(id)arg5 timeout:(CGFloat)arg6 ;
-(id)initWithUUID:(id)arg0 originatorId:(id)arg1 consumerSubType:(unsigned char)arg2 timeout:(CGFloat)arg3 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif