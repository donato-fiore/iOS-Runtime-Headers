// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUIPAGEDLABEL_H
#define VTUIPAGEDLABEL_H

@class UIView, UIScrollView, UILabel;



@interface VTUIPagedLabel : UIView {
    UIScrollView *_scrollView;
    UIView *_instructionContainerLeft;
    UIView *_instructionContainerRight;
    UILabel *_instructionLabelLeft;
    UILabel *_instructionLabelRight;
    BOOL _isProximity;
    NSInteger _enrollmentStyle;
}




-(id)initWithFrame:(struct CGRect )arg0 isProximity:(BOOL)arg1 forEnrollmentStyle:(NSInteger)arg2 ;
-(void)clear;
-(void)setText:(id)arg0 ;
-(void)setupViews;
-(void)slideInText:(id)arg0 afterDelay:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif