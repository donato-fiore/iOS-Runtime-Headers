// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSAPPREVIEWPROMPTMANAGER_H
#define WBSAPPREVIEWPROMPTMANAGER_H

@protocol WBSAppReviewPromptPresenting;

#import <Foundation/Foundation.h>


@interface WBSAppReviewPromptManager : NSObject

@property (weak, nonatomic) NSObject<WBSAppReviewPromptPresenting> *presenter; // ivar: _presenter


-(BOOL)_shouldPromptForReview;
-(id)init;
-(id)initWithPresenter:(id)arg0 ;
-(void)_presentIfNeeded;
-(void)didDismissReaderWithScrollPercentage:(CGFloat)arg0 dateReaderOpened:(id)arg1 ;


@end


#endif