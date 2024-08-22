// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDDEVICESTOREDDATAVIEWCONTROLLER_H
#define WDDEVICESTOREDDATAVIEWCONTROLLER_H

@class HKDevice, NSString;


#import "WDStoredDataByCategoryViewController.h"

@interface WDDeviceStoredDataViewController : WDStoredDataByCategoryViewController

@property (retain, nonatomic) HKDevice *device; // ivar: _device
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName


-(BOOL)shouldShowDeleteAllDataButton;
-(id)storedDataDisplayName;
-(id)storedDataPredicate;
-(void)deleteAllStoredData;


@end


#endif