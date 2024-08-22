// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGWIDGETVISIBILITYMANAGER_H
#define WGWIDGETVISIBILITYMANAGER_H

@class NSMutableDictionary, NSMutableSet;
@protocol WGWidgetVisibilityDelegate;

#import <Foundation/Foundation.h>


@interface WGWidgetVisibilityManager : NSObject {
    NSMutableDictionary *_widgetTagsByIdentifier;
    NSMutableDictionary *_extensionHashByIdentifier;
    NSMutableDictionary *_visibilityDefaultValueByIdentifier;
    NSMutableDictionary *_visibilityPreferenceByIdentifier;
    NSMutableSet *_visibilityOverridenIdentifiers;
    NSMutableSet *_mobileGestaltQuestions;
    *MGNotificationTokenStruct _mobileGestaltNotificationToken;
    BOOL _delegateRespondsToWidgetVisibilityDidChange;
}


@property (weak, nonatomic) NSObject<WGWidgetVisibilityDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic, getter=_mobileGestaltAnswerByWidgetTag) NSMutableDictionary *mobileGestaltAnswerByWidgetTag; // ivar: _mobileGestaltAnswerByWidgetTag


-(BOOL)_updateWidgetVisibilityPreference:(id)arg0 ;
-(BOOL)_updateWidgetVisibilityPreferences;
-(BOOL)isWidgetWithIdentifierVisible:(id)arg0 ;
-(id)_allWidgetTags;
-(id)_widgetTagsForWidgetExtensionInfoDictionary:(id)arg0 ;
-(id)init;
-(void)_registerForVisiblityPreferenceChanges;
-(void)_unregisterForVisiblityPreferenceChanges;
-(void)_updateMobileGestaltQuestions;
-(void)_updateWidgetTagsAndIconVisibilityForExtension:(id)arg0 ;
-(void)_updateWidgetTagsAndVisibilityForExtensions:(id)arg0 ;
-(void)_widgetVisibilityChanged;
-(void)_widgetVisibilityPreferencesChanged;
-(void)dealloc;
-(void)updateVisibilityForExtensions:(id)arg0 ;


@end


#endif