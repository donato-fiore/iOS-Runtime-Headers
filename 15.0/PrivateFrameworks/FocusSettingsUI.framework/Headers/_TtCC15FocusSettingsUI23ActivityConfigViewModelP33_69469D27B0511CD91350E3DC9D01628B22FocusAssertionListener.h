// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCC15FOCUSSETTINGSUI23ACTIVITYCONFIGVIEWMODELP33_69469D27B0511CD91350E3DC9D01628B22FOCUSASSERTIONLISTENER_H
#define _TTCC15FOCUSSETTINGSUI23ACTIVITYCONFIGVIEWMODELP33_69469D27B0511CD91350E3DC9D01628B22FOCUSASSERTIONLISTENER_H

@protocol FSUIFocusActivationManagerListener;

#import <Foundation/Foundation.h>


@interface _TtCC15FocusSettingsUI23ActivityConfigViewModelP33_69469D27B0511CD91350E3DC9D01628B22FocusAssertionListener : NSObject <FSUIFocusActivationManagerListener>

 {
    ? modeActivationDidChange;
}




-(id)init;
-(void)didUpdateActiveModesForActivationManager:(id)arg0 assertion:(id)arg1 ;


@end


#endif