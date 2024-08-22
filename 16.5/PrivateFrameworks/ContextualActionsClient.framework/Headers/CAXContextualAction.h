// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAXCONTEXTUALACTION_H
#define CAXCONTEXTUALACTION_H

@class NSString, NSArray, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXSuggestionExecutableProtocol;

#import <Foundation/Foundation.h>


@interface CAXContextualAction : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXSuggestionExecutableProtocol>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (nonatomic) NSInteger confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (retain, nonatomic) NSUUID *suggestionUUID; // ivar: _suggestionUUID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)encodeAsProto;
-(id)initWithActionIdentifier:(id)arg0 confidence:(NSInteger)arg1 parameters:(id)arg2 ;
-(id)initWithActionIdentifier:(id)arg0 parameters:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif