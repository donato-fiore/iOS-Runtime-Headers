// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKSTACKVIEW_H
#define _MKSTACKVIEW_H

@class UIView, NSArray, NSHashTable;
@protocol _MKAnimationStackViewDelegate, _MKStackViewDelegate;



@interface _MKStackView : UIView {
    NSArray *_stackConstraints;
    NSHashTable *_viewsNeedingWidthConstraints;
}


@property (nonatomic) BOOL bottomConstraintShouldBeGreaterThanOrEqual; // ivar: _bottomConstraintShouldBeGreaterThanOrEqual
@property (weak, nonatomic) NSObject<_MKAnimationStackViewDelegate> *stackAnimationDelegate; // ivar: _stackAnimationDelegate
@property (weak, nonatomic) NSObject<_MKStackViewDelegate> *stackDelegate; // ivar: _stackDelegate
@property (copy, nonatomic) NSArray *stackedSubviews; // ivar: _stackedSubviews


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createConstraints;
-(void)addSubview:(id)arg0 ;


@end


#endif