// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTONEPICKERTABLEVIEW_H
#define TKTONEPICKERTABLEVIEW_H

@class UITableView;
@protocol TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver;



@interface TKTonePickerTableView : UITableView

@property (weak, nonatomic) NSObject<TKTonePickerTableViewLayoutMarginsObserver> *layoutMarginsObserver; // ivar: _layoutMarginsObserver
@property (weak, nonatomic) NSObject<TKTonePickerTableViewSeparatorObserver> *separatorObserver; // ivar: _separatorObserver


-(void)_handleSeparatorColorDidChange;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)setSeparatorColor:(id)arg0 ;


@end


#endif