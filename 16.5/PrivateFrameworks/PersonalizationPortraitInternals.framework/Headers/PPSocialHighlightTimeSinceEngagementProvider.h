// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOCIALHIGHLIGHTTIMESINCEENGAGEMENTPROVIDER_H
#define PPSOCIALHIGHLIGHTTIMESINCEENGAGEMENTPROVIDER_H

@class NSMutableDictionary;
@protocol PPSocialHighlightFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightTimeSinceEngagementProvider : NSObject <PPSocialHighlightFeatureProvider>

 {
    NSMutableDictionary *_dates;
    id *_keyBlock;
    id *_groupByBlock;
    NSUInteger _feedbackType;
    BOOL _mostRecent;
}




-(id)applyFeedback:(id)arg0 ;
// -(id)initWithFeedbackType:(NSUInteger)arg0 feedbackGroupByBlock:(id)arg1 highlightKeyBlock:(unk)arg2 mostRecent:(id)arg3 highlights:(unk)arg4  ;
-(id)valueForHighlight:(id)arg0 ;


@end


#endif