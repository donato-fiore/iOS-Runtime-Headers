// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSETTINGSSECONDARYRESOURCEDOWNLOADCONTROLLER_H
#define AXSETTINGSSECONDARYRESOURCEDOWNLOADCONTROLLER_H



#import "AXSettingsResourceDownloadController.h"

@interface AXSettingsSecondaryResourceDownloadController : AXSettingsResourceDownloadController



-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_dialect;
-(id)_footerLabel;
-(id)_internalSpecifiers;
-(id)getDialectPreferencesCallback:(SEL)arg0 ;
-(id)setDialectPreferencesCallback:(SEL)arg0 ;
-(id)specifiers;
-(void)_donePressed;
-(void)_editPressed:(id)arg0 ;
-(void)manageEditButton;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif