// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATIONNOTIFICATIONLISTCONTENTVIEW_H
#define WFAUTOMATIONNOTIFICATIONLISTCONTENTVIEW_H

@class UIView, NSString, UITableView, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface WFAutomationNotificationListContentView : UIView <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSArray *triggerDisplayInfo; // ivar: _triggerDisplayInfo


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredSize;
-(void)updateUIFromNotificationUserInfo:(id)arg0 ;


@end


#endif