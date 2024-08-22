// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOCIALHIGHLIGHTENGAGEMENTPROVIDER_H
#define PPSOCIALHIGHLIGHTENGAGEMENTPROVIDER_H

@class NSMutableDictionary, NSDate;
@protocol PPSocialHighlightFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightEngagementProvider : NSObject <PPSocialHighlightFeatureProvider>

 {
    NSMutableDictionary *_engagementsByKey;
    NSUInteger _feedbackType;
    id *_groupByBlock;
    id *_keyBlock;
    NSDate *_earliestDateToAccept;
    BOOL _acceptOnlyPrimary;
}




-(id)applyFeedback:(id)arg0 ;
// -(id)initWithFeedbackType:(NSUInteger)arg0 feedbackGroupByBlock:(id)arg1 highlightKeyBlock:(unk)arg2 highlights:(id)arg3  ;
// -(id)initWithFeedbackType:(NSUInteger)arg0 feedbackGroupByBlock:(id)arg1 highlightKeyBlock:(unk)arg2 intervalSinceNow:(id)arg3 highlights:(unk)arg4  ;
-(id)valueForHighlight:(id)arg0 ;


@end


#endif