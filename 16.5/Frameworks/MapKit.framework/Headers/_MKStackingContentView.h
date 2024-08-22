// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKSTACKINGCONTENTVIEW_H
#define _MKSTACKINGCONTENTVIEW_H

@class MKUIViewControllerRootView, NSLayoutConstraint, UIView, NSString;
@protocol MKVibrantGroup;



@interface _MKStackingContentView : MKUIViewControllerRootView <MKVibrantGroup>

 {
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_middleConstraint;
    NSLayoutConstraint *_bottomConstraint;
}


@property (readonly, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) UIView *bottomView; // ivar: _bottomView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *topView; // ivar: _topView


-(id)initWithViewController:(id)arg0 ;
-(id)vibrancyGroupName;
-(void)updateConstraints;


@end


#endif