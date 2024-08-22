// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEFAULTWIDGETSUGGESTERCLIENT_H
#define ATXDEFAULTWIDGETSUGGESTERCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ATXDefaultWidgetSuggesterClient : NSObject {
    NSXPCConnection *_xpcConnection;
}




+(BOOL)shouldSuggestTVWithAppLaunchCount:(CGFloat)arg0 intentDonationCount:(CGFloat)arg1 upcomingMediaCount:(CGFloat)arg2 ;
-(id)init;
-(void)defaultWidgetSuggestionOfType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)logEventForDefaultWidgetSuggestionType:(NSInteger)arg0 event:(NSInteger)arg1 ;


@end


#endif