// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPMEDIARESTRICTIONSSETTINGSMANAGER_H
#define HPMEDIARESTRICTIONSSETTINGSMANAGER_H

@class NSUserDefaults;
@protocol HPMediaRestrictionsSettingsManagerDelegate;

#import <Foundation/Foundation.h>


@interface HPMediaRestrictionsSettingsManager : NSObject {
    NSUserDefaults *_mediaPlaybackDefaults;
}


@property (weak, nonatomic) NSObject<HPMediaRestrictionsSettingsManagerDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)_addObserverForLocalInfluencesSettingChange;
-(void)_removeObserverForLocalInfluencesSettingChange;
-(void)homeKitMediaSettingForKeyPathChanged:(id)arg0 updatedValue:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif