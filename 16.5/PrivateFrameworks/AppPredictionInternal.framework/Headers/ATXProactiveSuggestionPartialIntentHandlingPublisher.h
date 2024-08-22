// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPROACTIVESUGGESTIONPARTIALINTENTHANDLINGPUBLISHER_H
#define ATXPROACTIVESUGGESTIONPARTIALINTENTHANDLINGPUBLISHER_H

@class BMBookmarkablePublisher, BPSPublisher;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionPartialIntentHandlingPublisher : NSObject

@property (retain, nonatomic) BMBookmarkablePublisher *appLaunchPublisher; // ivar: _appLaunchPublisher
@property (retain, nonatomic) BMBookmarkablePublisher *intentPublisher; // ivar: _intentPublisher
@property (retain, nonatomic) BPSPublisher *uiFeedbackPublisher; // ivar: _uiFeedbackPublisher


-(id)_timestampFromEvent:(id)arg0 ;
-(id)initWithUIFeedbackPublisher:(id)arg0 appLaunchPublisher:(id)arg1 intentPublisher:(id)arg2 ;
-(id)partialIntentUIFeedbackPublisher;


@end


#endif