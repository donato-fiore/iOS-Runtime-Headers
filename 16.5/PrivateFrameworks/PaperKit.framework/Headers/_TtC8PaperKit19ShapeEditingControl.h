// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT19SHAPEEDITINGCONTROL_H
#define _TTC8PAPERKIT19SHAPEEDITINGCONTROL_H

@class UIView;
@protocol UIPopoverPresentationControllerDelegate;



@interface _TtC8PaperKit19ShapeEditingControl : UIView <UIPopoverPresentationControllerDelegate>

 {
    ? label;
    ? button;
    ? controlHeight;
    ? controlWidth;
    ? smallerControlWidth;
    ? nonDynamicButtonBackgroundColor;
}


@property (nonatomic) BOOL userInteractionEnabled;


-(BOOL)isUserInteractionEnabled;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif