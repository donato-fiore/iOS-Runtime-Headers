// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAXCONTEXTUALACTIONCONTENT_H
#define CAXCONTEXTUALACTIONCONTENT_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface CAXContextualActionContent : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSDictionary *contentMetadata; // ivar: _contentMetadata
@property (readonly, nonatomic) NSString *contentType; // ivar: _contentType


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentType:(id)arg0 contentMetadata:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif