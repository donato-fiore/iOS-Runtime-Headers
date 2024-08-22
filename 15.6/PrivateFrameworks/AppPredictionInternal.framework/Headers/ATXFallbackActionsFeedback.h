// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFALLBACKACTIONSFEEDBACK_H
#define ATXFALLBACKACTIONSFEEDBACK_H

@class NSString;
@protocol ATXProactiveSuggestionFeedbackListenerProtocol;

#import <Foundation/Foundation.h>


@interface ATXFallbackActionsFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)clientModelIds;
-(void)receiveUIFeedbackResult:(id)arg0 ;
-(void)receiveUIFeedbackResult:(id)arg0 histogramManager:(id)arg1 ;


@end


#endif