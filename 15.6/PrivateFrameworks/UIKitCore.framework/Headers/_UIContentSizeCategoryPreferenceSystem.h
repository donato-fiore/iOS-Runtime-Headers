// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTENTSIZECATEGORYPREFERENCESYSTEM_H
#define _UICONTENTSIZECATEGORYPREFERENCESYSTEM_H



#import "UIContentSizeCategoryPreference.h"

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {
    BOOL _observingNotification;
    BOOL _didCheckForPreferredContentSizeCategoryOverride;
    BOOL _applicationOverridesPreferredContentSizeCategory;
}


@property (retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences; // ivar: _overridePreferences


-(id)description;
-(id)initAsSystem;
-(void)_beginObservingPreferredContentSizeChangedNotification;
-(void)_endObservingPreferredContentSizeChangedNotification;
-(void)_postContentSizeCategoryDidChangeNotification;
-(void)_readAndObservePreferences;
-(void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(BOOL)arg0 ;
-(void)_updateContentSizeCategory:(id)arg0 carPlay:(id)arg1 postingNotification:(BOOL)arg2 ;
-(void)checkForChanges;
-(void)dealloc;
-(void)setPreferredContentSizeCategory:(id)arg0 ;


@end


#endif