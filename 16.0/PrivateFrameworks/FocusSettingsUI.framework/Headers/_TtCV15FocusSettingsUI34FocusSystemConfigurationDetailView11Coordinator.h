// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV15FOCUSSETTINGSUI34FOCUSSYSTEMCONFIGURATIONDETAILVIEW11COORDINATOR_H
#define _TTCV15FOCUSSETTINGSUI34FOCUSSYSTEMCONFIGURATIONDETAILVIEW11COORDINATOR_H

@protocol WFFocusConfigurationViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV15FocusSettingsUI34FocusSystemConfigurationDetailView11Coordinator : NSObject <WFFocusConfigurationViewControllerDelegate>

 {
    ? updateConfigurationHandler;
}




-(id)init;
-(void)focusConfigurationViewController:(id)arg0 configurationUIStateDidChange:(id)arg1 ;
-(void)focusConfigurationViewController:(id)arg0 didPressButtonWithIdentifier:(id)arg1 cellFrame:(struct CGRect )arg2 ;


@end


#endif