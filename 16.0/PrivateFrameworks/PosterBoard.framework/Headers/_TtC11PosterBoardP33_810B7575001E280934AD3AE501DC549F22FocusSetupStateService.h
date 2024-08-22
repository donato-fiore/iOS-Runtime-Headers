// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11POSTERBOARDP33_810B7575001E280934AD3AE501DC549F22FOCUSSETUPSTATESERVICE_H
#define _TTC11POSTERBOARDP33_810B7575001E280934AD3AE501DC549F22FOCUSSETUPSTATESERVICE_H

@protocol DNDModeConfigurationServiceListener;

#import <Foundation/Foundation.h>


@interface _TtC11PosterBoardP33_810B7575001E280934AD3AE501DC549F22FocusSetupStateService : NSObject <DNDModeConfigurationServiceListener>

 {
    ? dndModeConfigurationService;
    ? onUpdate;
}




-(id)init;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;


@end


#endif