// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKAPIREPORTER_H
#define GKAPIREPORTER_H


#import <Foundation/Foundation.h>


@interface GKAPIReporter : NSObject



+(id)reporter;
-(void)recordClickWithAction:(id)arg0 targetId:(id)arg1 targetType:(id)arg2 pageType:(id)arg3 ;
-(void)recordImpressionWithType:(id)arg0 index:(id)arg1 element:(id)arg2 parent:(id)arg3 ;
-(void)recordPageWithID:(id)arg0 pageContext:(id)arg1 pageType:(id)arg2 ;
-(void)recordPerformanceMetrics:(id)arg0 ;
-(void)recordVoiceChat;
-(void)sendMetrics:(id)arg0 ;
-(void)sendPerformanceMetrics:(id)arg0 ;


@end


#endif