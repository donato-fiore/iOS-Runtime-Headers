// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUINTERNALSETTINGSDETAILSCONTROLLER_H
#define AUINTERNALSETTINGSDETAILSCONTROLLER_H

@class PSListController, NSString;



@interface AUInternalSettingsDetailsController : PSListController

@property (copy) NSString *description; // ivar: description


-(id)specifiers;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif