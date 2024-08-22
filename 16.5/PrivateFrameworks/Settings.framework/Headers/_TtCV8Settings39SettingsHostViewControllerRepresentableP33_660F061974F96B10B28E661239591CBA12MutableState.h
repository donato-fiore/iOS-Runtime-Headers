// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV8SETTINGS39SETTINGSHOSTVIEWCONTROLLERREPRESENTABLEP33_660F061974F96B10B28E661239591CBA12MUTABLESTATE_H
#define _TTCV8SETTINGS39SETTINGSHOSTVIEWCONTROLLERREPRESENTABLEP33_660F061974F96B10B28E661239591CBA12MUTABLESTATE_H

@protocol _EXHostViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV8Settings39SettingsHostViewControllerRepresentableP33_660F061974F96B10B28E661239591CBA12MutableState : NSObject <_EXHostViewControllerDelegate>

 {
    ? role;
    ? _hostViewController;
    ? ext;
    ? completion;
}




-(id)init;
-(void)hostViewController:(id)arg0 didBeginHosting:(id)arg1 ;
-(void)hostViewController:(id)arg0 didEndHosting:(id)arg1 error:(id)arg2 ;
-(void)hostViewController:(id)arg0 didFailToHost:(id)arg1 error:(id)arg2 ;
-(void)hostViewController:(id)arg0 didPrepareToHost:(id)arg1 ;


@end


#endif