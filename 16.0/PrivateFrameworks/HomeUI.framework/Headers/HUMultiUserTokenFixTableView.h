// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMULTIUSERTOKENFIXTABLEVIEW_H
#define HUMULTIUSERTOKENFIXTABLEVIEW_H

@class UITableView, NSString, HMHome, ACAccount;
@protocol UITableViewDelegate, UITableViewDataSource, HUMediaAccountDelegate;



@interface HUMultiUserTokenFixTableView : UITableView <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) ACAccount *mediaAccount; // ivar: _mediaAccount
@property (weak, nonatomic) NSObject<HUMediaAccountDelegate> *mediaAccountDelegate; // ivar: _mediaAccountDelegate
@property (readonly) Class superclass;


-(CGFloat)_buttonTitleTextHeight;
-(CGFloat)_maxTitleAndDescriptionCellHeightForWidth:(CGFloat)arg0 ;
-(CGFloat)_titleHeight;
-(CGFloat)tableViewHeightForWidth:(CGFloat)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_buttonTitleTextFont;
-(id)_titleFont;
-(id)initWithFrame:(struct CGRect )arg0 mediaAccount:(id)arg1 home:(id)arg2 delegate:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif