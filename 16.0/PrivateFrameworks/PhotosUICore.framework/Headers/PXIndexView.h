// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXINDEXVIEW_H
#define PXINDEXVIEW_H

@class UIView, UILabel;



@interface PXIndexView : UIView {
    UIView *_frameView;
    UILabel *_label;
}




-(id)init;
-(void)layoutSubviews;
-(void)setIndex:(NSUInteger)arg0 ;


@end


#endif