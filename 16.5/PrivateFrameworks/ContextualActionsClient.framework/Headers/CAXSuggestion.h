// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAXSUGGESTION_H
#define CAXSUGGESTION_H

@class NSUUID, NSString, NSArray;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface CAXSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (retain, nonatomic) NSUUID *blendingCacheUpdateUUID; // ivar: _blendingCacheUpdateUUID
@property (retain, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (readonly, nonatomic) NSArray *suggestedActions; // ivar: _suggestedActions


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSuggestedActions:(id)arg0 modelVersion:(id)arg1 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif