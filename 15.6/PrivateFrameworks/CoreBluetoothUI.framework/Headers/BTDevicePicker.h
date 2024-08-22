// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BTDEVICEPICKER_H
#define BTDEVICEPICKER_H

@class UIWindow, NSString, NSPredicate, NSExtension;
@protocol BTDevicePickerRemoteViewControllerHost, BTDevicePickerDelegate, NSCopying;

#import <Foundation/Foundation.h>

#import "BTDevicePickerRemoteViewController.h"

@interface BTDevicePicker : NSObject <BTDevicePickerRemoteViewControllerHost>

 {
    UIWindow *_alertWindow;
    NSString *_title;
    unsigned int _service;
    NSPredicate *_predicate;
}


@property (nonatomic) NSObject<BTDevicePickerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) BTDevicePickerRemoteViewController *devicePickerRemoteViewController; // ivar: _devicePickerRemoteViewController
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (copy, nonatomic) NSObject<NSCopying> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier


-(id)initWithTitle:(id)arg0 service:(unsigned int)arg1 discoveryNameFilter:(id)arg2 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)createAlertWindowForRootViewController:(id)arg0 ;
-(void)dealloc;
-(void)didDismissWithResult:(NSInteger)arg0 deviceAddress:(id)arg1 ;
-(void)discoveredDevice:(id)arg0 deviceAddress:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)show;


@end


#endif