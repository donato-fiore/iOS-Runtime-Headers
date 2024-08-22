// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIIPHONEDOWNLOADSVIEWCONTROLLER_H
#define SKUIIPHONEDOWNLOADSVIEWCONTROLLER_H

@class UIViewController, UITableView, _UIContentUnavailableView, NSString, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate, SKUIDownloadsChildViewControllerDelegate;


#import "SKUIClientContext.h"

@interface SKUIIPhoneDownloadsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    UITableView *_tableView;
    _UIContentUnavailableView *_noContentView;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIDownloadsChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *downloads; // ivar: _downloads
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_reload;
-(void)loadView;
-(void)reloadDownloadsAtIndexes:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;


@end


#endif