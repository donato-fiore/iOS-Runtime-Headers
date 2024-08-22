// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSIMPLEITEMMODULETABLEVIEWCONTROLLER_H
#define HUSIMPLEITEMMODULETABLEVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UITextViewDelegate;


#import "HUItemTableViewController.h"

@interface HUSimpleItemModuleTableViewController : HUItemTableViewController <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *moduleControllerBuilder; // ivar: _moduleControllerBuilder
@property (readonly, nonatomic) NSArray *moduleControllers; // ivar: _moduleControllers
@property (readonly) Class superclass;


+(NSUInteger)updateMode;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
// -(id)initWithTableViewStyle:(NSInteger)arg0 moduleCreator:(id)arg1 moduleControllerBuilder:(unk)arg2  ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_updateTitle;
-(void)dismissTextViewController;
-(void)viewDidLayoutSubviews;


@end


#endif