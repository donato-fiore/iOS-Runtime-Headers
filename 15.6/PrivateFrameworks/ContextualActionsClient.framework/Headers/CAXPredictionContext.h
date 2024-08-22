// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAXPREDICTIONCONTEXT_H
#define CAXPREDICTIONCONTEXT_H

@class NSArray, NSString, NSDate;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXSuggestionExecutableProtocol;

#import <Foundation/Foundation.h>


@interface CAXPredictionContext : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXSuggestionExecutableProtocol>

 {
    CGFloat _absoluteDate;
}


@property (retain, nonatomic) NSArray *contents; // ivar: _contents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *previousActions; // ivar: _previousActions
@property (readonly, copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm
@property (copy, nonatomic) NSString *sourceAppName; // ivar: _sourceAppName
@property (retain, nonatomic) NSDate *suggestionDate; // ivar: _suggestionDate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForint32_t:(int)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCAXPredictionContext:(id)arg0 ;
-(id)date;
-(id)encodeAsProto;
-(id)initWithAbsoluteDate:(CGFloat)arg0 sourceAppName:(id)arg1 contents:(id)arg2 previousActions:(id)arg3 searchTerm:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSuggestionDate:(id)arg0 sourceAppName:(id)arg1 contents:(id)arg2 previousActions:(id)arg3 searchTerm:(id)arg4 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDate:(id)arg0 ;


@end


#endif