// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTORAGEPROGRESSVIEW_H
#define STSTORAGEPROGRESSVIEW_H

@class UIView, UIColor;



@interface STStorageProgressView : UIView {
    UIColor *_grayColor;
    UIColor *_blueColor;
    CGFloat _percent;
}


@property CGFloat percent;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateColors;


@end


#endif