// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUISASHHEADERVIEW_H
#define SIRIUISASHHEADERVIEW_H

@class UICollectionReusableView, UILabel, NSString;
@protocol SiriUIReusableView, SiriUISizableHeaderView;


#import "SiriUISnippetViewController.h"

@interface SiriUISashHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView>

 {
    UILabel *_headerLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


+(CGFloat)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;
-(CGFloat)desiredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif