// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSDROPDOWNROOTVIEW_H
#define STSDROPDOWNROOTVIEW_H

@class UIView, NSMutableArray;



@interface STSDropDownRootView : UIView {
    NSMutableArray *_constraints;
}


@property (retain, nonatomic) UIView *contentView; // ivar: _contentView


-(id)init;
-(void)layoutSubviews;


@end


#endif