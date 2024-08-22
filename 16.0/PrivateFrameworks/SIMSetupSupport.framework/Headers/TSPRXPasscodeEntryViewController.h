// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPRXPASSCODEENTRYVIEWCONTROLLER_H
#define TSPRXPASSCODEENTRYVIEWCONTROLLER_H

@class PRXPasscodeEntryViewController, NSString;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "SSProximityDevice.h"

@interface TSPRXPasscodeEntryViewController : PRXPasscodeEntryViewController <TSSetupFlowItem>



@property (retain) SSProximityDevice *btDevice; // ivar: _btDevice
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBtDevice:(id)arg0 passcodeType:(int)arg1 ;
-(void)_handlePINCodeUpdate:(id)arg0 ;
-(void)retry;


@end


#endif