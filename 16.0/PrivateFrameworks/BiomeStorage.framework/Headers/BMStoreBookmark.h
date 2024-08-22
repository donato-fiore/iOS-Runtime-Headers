// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSTOREBOOKMARK_H
#define BMSTOREBOOKMARK_H

@class NSString;
@protocol NSCopying, NSSecureCoding, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMStoreBookmark : NSObject <NSCopying, NSSecureCoding, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat iterationStartTime; // ivar: _iterationStartTime
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSString *segmentName; // ivar: _segmentName
@property (readonly, nonatomic) NSString *streamId; // ivar: _streamId


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionDict;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithStream:(id)arg0 segment:(id)arg1 iterationStartTime:(CGFloat)arg2 offset:(NSUInteger)arg3 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif