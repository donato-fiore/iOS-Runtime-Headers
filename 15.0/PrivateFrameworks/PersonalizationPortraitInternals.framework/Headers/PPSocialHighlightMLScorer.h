// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSOCIALHIGHLIGHTMLSCORER_H
#define PPSOCIALHIGHLIGHTMLSCORER_H

@class MLModel, NSString;
@protocol PPSocialHighlightScorer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightMLScorer : NSObject <PPSocialHighlightScorer>

 {
    MLModel *_model;
    NSObject<OS_dispatch_queue> *_modelQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)scoreSocialHighlight:(id)arg0 ;


@end


#endif