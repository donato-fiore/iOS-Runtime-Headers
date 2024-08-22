// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSACTIONSHEETCONTROLLER_H
#define CPSACTIONSHEETCONTROLLER_H

@class UIAlertController, CPActionSheetTemplate;
@protocol CPTemplateDelegate;



@interface CPSActionSheetController : UIAlertController

@property (retain, nonatomic) CPActionSheetTemplate *actionSheet; // ivar: _actionSheet
@property (retain, nonatomic) NSObject<CPTemplateDelegate> *templateDelegate; // ivar: _templateDelegate


+(id)actionSheetControllerWithActionSheet:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif