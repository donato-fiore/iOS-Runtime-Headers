// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPKTIPCONTENTANNOTATIONVIEW_H
#define TPKTIPCONTENTANNOTATIONVIEW_H



#import "TPKContentView.h"

@interface TPKTipContentAnnotationView : TPKContentView {
    ? sourceType;
    ? sourceView;
    ? $__lazy_storage_$_bubbleView;
    ? $__lazy_storage_$_arrowDirection;
    ? $__lazy_storage_$_hostingRect;
    ? $__lazy_storage_$_sourceCenter;
    ? $__lazy_storage_$_hostingViewNeedsReset;
}


@property (nonatomic) CGRect bounds;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentController:(id)arg0 tipContent:(id)arg1 sourceBarButtonItem:(id)arg2 ;
-(id)initWithContentController:(id)arg0 tipContent:(id)arg1 sourceView:(id)arg2 ;
-(id)initWithController:(id)arg0 content:(id)arg1 ;
-(id)initWithReusableTipView:(id)arg0 ;
-(void)annotationViewNeedsLayout;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)deviceOrientationDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)resetHostingView;
-(void)updateContentBackgroundColor:(id)arg0 ;


@end


#endif