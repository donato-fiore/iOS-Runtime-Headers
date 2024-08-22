// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDLOCALDEVICESTOREDDATAVIEWCONTROLLER_H
#define WDLOCALDEVICESTOREDDATAVIEWCONTROLLER_H



#import "WDSourceStoredDataViewController.h"

@interface WDLocalDeviceStoredDataViewController : WDSourceStoredDataViewController



-(BOOL)_shouldDisplayPrivacySection;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif