// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAXCONTEXTUALACTIONPARAMETER_H
#define CAXCONTEXTUALACTIONPARAMETER_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface CAXContextualActionParameter : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSDictionary *parameterMetadata; // ivar: _parameterMetadata
@property (readonly, nonatomic) NSString *parameterType; // ivar: _parameterType


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameterType:(id)arg0 parameterMetadata:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif