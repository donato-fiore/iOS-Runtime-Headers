// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSELECTPICKERGROUPHEADERVIEW_H
#define WKSELECTPICKERGROUPHEADERVIEW_H

@class UIView;



@interface WKSelectPickerGroupHeaderView : UIView {
    RetainPtr<UILabel> _label;
    RetainPtr<UIImageView> _collapseIndicatorView;
    WeakObjCPtr<WKSelectPickerTableViewController> _tableViewController;
    BOOL _collapsed;
}


@property (readonly, nonatomic) NSInteger section; // ivar: _section


+(CGFloat)preferredHeight;
+(CGFloat)preferredMargin;
+(id)preferredFont;
-(id)initWithGroupName:(id)arg0 section:(NSInteger)arg1 ;
-(void)didTapHeader:(id)arg0 ;
-(void)setCollapsed:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setTableViewController:(id)arg0 ;


@end


#endif