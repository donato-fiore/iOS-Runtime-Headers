// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTRANSLATIONSCROLLINTERACTIONANALYTICSHELPER_H
#define WBSTRANSLATIONSCROLLINTERACTIONANALYTICSHELPER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface WBSTranslationScrollInteractionAnalyticsHelper : NSObject {
    os_unfair_lock_s _synchronousIvarLock;
    NSDate *_translationStartTime;
    CGFloat _firstInteractionDelayFromTranslation;
    BOOL _webViewHasInteraction;
    CGFloat _maxVisibleHeightPercentage;
}


@property (copy, nonatomic) id *submissionHandler; // ivar: _submissionHandler


-(id)init;
-(void)_calculateFirstInteractionDelayAndMaxPercentageWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)recordFirstInteractionIfNeeded;
-(void)updateMaxVisibleHeightPercentage:(CGFloat)arg0 ;


@end


#endif