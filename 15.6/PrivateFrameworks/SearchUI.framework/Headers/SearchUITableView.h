// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUITABLEVIEW_H
#define SEARCHUITABLEVIEW_H

@class UITableView;
@protocol SearchUITableViewSizingDelegate;



@interface SearchUITableView : UITableView

@property (weak) NSObject<SearchUITableViewSizingDelegate> *sizingDelegate; // ivar: _sizingDelegate


-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)safeAreaInsetsDidChange;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif