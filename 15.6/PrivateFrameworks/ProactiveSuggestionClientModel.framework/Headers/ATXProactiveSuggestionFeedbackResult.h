// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONFEEDBACKRESULT_H
#define ATXPROACTIVESUGGESTIONFEEDBACKRESULT_H

@protocol NSSecureCoding, ATXProactiveSuggestionFeedbackContextProtocol;

#import <Foundation/Foundation.h>

#import "ATXClientModelCacheUpdate.h"
#import "ATXBlendingModelUICacheUpdate.h"

@interface ATXProactiveSuggestionFeedbackResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ATXClientModelCacheUpdate *clientCacheUpdate; // ivar: _clientCacheUpdate
@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) NSObject<ATXProactiveSuggestionFeedbackContextProtocol> *context; // ivar: _context
@property (readonly, nonatomic) NSInteger sessionType; // ivar: _sessionType
@property (readonly, nonatomic) ATXBlendingModelUICacheUpdate *uiCacheUpdate; // ivar: _uiCacheUpdate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConsumerSubType:(unsigned char)arg0 sessionType:(NSInteger)arg1 clientCacheUpdate:(id)arg2 uiCacheUpdate:(id)arg3 context:(id)arg4 ;
-(id)validContextClassNames;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif