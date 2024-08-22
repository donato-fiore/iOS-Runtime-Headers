// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI19SELFSIZINGTABLEVIEW_H
#define _TTC9COREIDVUI19SELFSIZINGTABLEVIEW_H

@class UITableView;



@interface _TtC9CoreIDVUI19SelfSizingTableView : UITableView {
    ? maxHeight;
}


@property (nonatomic) CGSize contentSize;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;


@end


#endif