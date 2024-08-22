// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPHISHINGURLCLASSIFIERCROWDSOURCEDFEEDBACKALLOWLISTADAPTER_H
#define WBSPHISHINGURLCLASSIFIERCROWDSOURCEDFEEDBACKALLOWLISTADAPTER_H

@class WBSCrowdsourcedFeedbackDomainNormalizer;
@protocol WBSPhishingURLClassifier, WBSCrowdsourcedFeedbackAllowList;

#import <Foundation/Foundation.h>


@interface WBSPhishingURLClassifierCrowdsourcedFeedbackAllowListAdapter : NSObject <WBSPhishingURLClassifier>

 {
    id<WBSCrowdsourcedFeedbackAllowList> *_crowdsourcedFeedbackAllowList;
    WBSCrowdsourcedFeedbackDomainNormalizer *_crowdsourcedFeedbackDomainNormalizer;
}




-(id)initWithCrowdsourcedFeedbackAllowList:(id)arg0 ;
-(void)classifyURL:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif