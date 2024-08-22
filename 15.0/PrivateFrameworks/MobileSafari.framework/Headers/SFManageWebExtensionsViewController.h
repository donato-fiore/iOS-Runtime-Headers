// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMANAGEWEBEXTENSIONSVIEWCONTROLLER_H
#define SFMANAGEWEBEXTENSIONSVIEWCONTROLLER_H

@class UITableViewController, NSArray;
@protocol WBSExtensionsControllerObserver;



@interface SFManageWebExtensionsViewController : UITableViewController <WBSExtensionsControllerObserver>

 {
    NSArray *_extensions;
}


@property (readonly, nonatomic) BOOL isPresentingFromPageFormatMenu; // ivar: _isPresentingFromPageFormatMenu


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initFromPageFormatMenu:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_enableExtensionPromptingForNewTabOverrideIfNecessary:(id)arg0 ;
-(void)_enableExtensionWithNewTabOverridePage:(id)arg0 ;
-(void)_extensionStateWasToggled:(id)arg0 ;
-(void)_reload;
-(void)_setExtensionStateForExtension:(id)arg0 isOn:(BOOL)arg1 ;
-(void)_updateLastViewedDate;
-(void)dealloc;
-(void)extensionsControllerExtensionListDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif