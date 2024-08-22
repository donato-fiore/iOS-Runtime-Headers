// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT20COMPACTTEXTSTYLEVIEW_H
#define _TTC8PAPERKIT20COMPACTTEXTSTYLEVIEW_H

@class UIControl;
@protocol UIPopoverPresentationControllerDelegate;



@interface _TtC8PaperKit20CompactTextStyleView : UIControl <UIPopoverPresentationControllerDelegate>

 {
    ? viewControllerProvider;
    ? textStyleView;
    ? imageView;
    ? image;
}


@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapSelf;
-(void)layoutSubviews;


@end


#endif