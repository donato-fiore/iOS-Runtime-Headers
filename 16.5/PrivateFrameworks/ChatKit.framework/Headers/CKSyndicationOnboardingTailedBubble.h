// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSYNDICATIONONBOARDINGTAILEDBUBBLE_H
#define CKSYNDICATIONONBOARDINGTAILEDBUBBLE_H

@class NSAttributedString;


#import "CKPinnedConversationRichLinkBubble.h"

@interface CKSyndicationOnboardingTailedBubble : CKPinnedConversationRichLinkBubble

@property (nonatomic) NSInteger appName; // ivar: _appName
@property (nonatomic) CGRect bubbleFrame; // ivar: _bubbleFrame
@property (retain, nonatomic) NSAttributedString *bubbleText; // ivar: _bubbleText


-(CGFloat)balloonTailHeight;
-(CGFloat)pillCornerRadius;
-(id)initWithFrame:(struct CGRect )arg0 withAppName:(NSInteger)arg1 withLPLinkView:(id)arg2 ;
-(struct CGRect )pillRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif