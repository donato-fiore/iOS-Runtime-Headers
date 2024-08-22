// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUUPDATELISTENINGHISTORYSETTINGSVIEWCONTROLLER_H
#define HUUPDATELISTENINGHISTORYSETTINGSVIEWCONTROLLER_H

@class NSString;
@protocol UITextViewDelegate;


#import "HUItemTableViewController.h"
#import "HUUpdateListeningHistorySettingsItemModuleController.h"

@interface HUUpdateListeningHistorySettingsViewController : HUItemTableViewController <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUUpdateListeningHistorySettingsItemModuleController *moduleController; // ivar: _moduleController
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithUserItem:(id)arg0 ;


@end


#endif