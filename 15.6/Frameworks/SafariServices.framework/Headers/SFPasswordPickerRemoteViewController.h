// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPASSWORDPICKERREMOTEVIEWCONTROLLER_H
#define SFPASSWORDPICKERREMOTEVIEWCONTROLLER_H

@class NSString;
@protocol SFPasswordPickerRemoteViewControllerProtocol;


#import "SFPasswordRemoteViewController.h"

@interface SFPasswordPickerRemoteViewController : SFPasswordRemoteViewController <SFPasswordPickerRemoteViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)passwordServiceViewControllerName;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)selectedCredential:(id)arg0 ;


@end


#endif