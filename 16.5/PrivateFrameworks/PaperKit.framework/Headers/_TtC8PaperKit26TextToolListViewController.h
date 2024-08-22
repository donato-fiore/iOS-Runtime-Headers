// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT26TEXTTOOLLISTVIEWCONTROLLER_H
#define _TTC8PAPERKIT26TEXTTOOLLISTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8PaperKit26TextToolListViewController : UIViewController {
    ? stackView;
    ? contentSizeObserver;
    ? minimumItemHeight;
    ? minimumPreferredContentSizeWidth;
    ? delegate;
    ? autoFillFormListItemVisible;
    ? addShapeListItemVisible;
    ? $__lazy_storage_$_listItemViews;
    ? $__lazy_storage_$_addTextBoxListItemView;
    ? $__lazy_storage_$_autoFillFormListItemView;
    ? $__lazy_storage_$_addSignatureListItemView;
    ? $__lazy_storage_$_addShapeListItemView;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapAddShapeListItemView:(id)arg0 forEvent:(id)arg1 ;
-(void)didTapAddSignatureListItemView:(id)arg0 forEvent:(id)arg1 ;
-(void)didTapAddTextBoxListItemView:(id)arg0 forEvent:(id)arg1 ;
-(void)didTapAutoFillFormListItemView:(id)arg0 forEvent:(id)arg1 ;
-(void)updatePreferredContentSize;
-(void)viewDidLoad;


@end


#endif