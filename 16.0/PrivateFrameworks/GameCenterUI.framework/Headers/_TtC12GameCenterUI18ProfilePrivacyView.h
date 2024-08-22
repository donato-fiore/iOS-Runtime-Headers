// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI18PROFILEPRIVACYVIEW_H
#define _TTC12GAMECENTERUI18PROFILEPRIVACYVIEW_H

@class TtC12GameCenterUI22OnboardingTemplateView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface _TtC12GameCenterUI18ProfilePrivacyView : TtC12GameCenterUI22OnboardingTemplateView <UITableViewDataSource, UITableViewDelegate>

 {
    ? delegate;
    ? isUnderage;
    ? primaryTrayButton;
    ? $__lazy_storage_$_tableData;
    ? tableView;
    ? tableViewHeight;
    ? $__lazy_storage_$_tableHeightAnchor;
    ? selectedPrivacyChoiceIndex;
}




-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)primaryAction;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif