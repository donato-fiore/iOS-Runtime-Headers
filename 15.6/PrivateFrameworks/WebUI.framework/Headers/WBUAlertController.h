// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBUALERTCONTROLLER_H
#define WBUALERTCONTROLLER_H

@class UIAlertController, UITableView, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "WebUIAlert.h"

@interface WBUAlertController : UIAlertController <UITableViewDelegate, UITableViewDataSource>

 {
    WebUIAlert *_alert;
    BOOL _automaticallyDismiss;
    UITableView *_tableView;
    id *_handler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAlert:(id)arg0 automaticallyDismiss:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_setUpAlert;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif