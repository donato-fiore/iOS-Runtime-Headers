// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAXCONTEXTUALACTIONSFEEDBACKEVENT_H
#define CAXCONTEXTUALACTIONSFEEDBACKEVENT_H

@class NSString;
@protocol BMStoreData, ATXProtoBufWrapper, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CAXPredictionContext.h"
#import "CAXContextualAction.h"
#import "CAXSuggestion.h"

@interface CAXContextualActionsFeedbackEvent : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CAXPredictionContext *deviceContext; // ivar: _deviceContext
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CAXContextualAction *selectedAction; // ivar: _selectedAction
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (copy, nonatomic) CAXSuggestion *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSelectedAction:(id)arg0 suggestion:(id)arg1 deviceContext:(id)arg2 sessionIdentifier:(id)arg3 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif