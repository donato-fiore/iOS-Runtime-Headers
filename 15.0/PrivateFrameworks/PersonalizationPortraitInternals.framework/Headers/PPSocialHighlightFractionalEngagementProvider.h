// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSOCIALHIGHLIGHTFRACTIONALENGAGEMENTPROVIDER_H
#define PPSOCIALHIGHLIGHTFRACTIONALENGAGEMENTPROVIDER_H

@class NSMutableDictionary;
@protocol PPSocialHighlightFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightFractionalEngagementProvider : NSObject <PPSocialHighlightFeatureProvider>

 {
    NSMutableDictionary *_engagementsByKey;
    NSMutableDictionary *_offeredByKey;
    id *_groupByBlock;
    id *_keyBlock;
}




-(id)applyFeedback:(id)arg0 ;
// -(id)initWithFeedbackGroupByBlock:(id)arg0 highlightKeyBlock:(unk)arg1 highlights:(id)arg2  ;
-(id)valueForHighlight:(id)arg0 ;


@end


#endif