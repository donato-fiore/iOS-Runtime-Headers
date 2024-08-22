// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCARPLAYPREFERENCES_H
#define CRCARPLAYPREFERENCES_H

@class NSString;
@protocol MCProfileConnectionObserver, CRCarPlayPreferencesDelegate;

#import <Foundation/Foundation.h>


@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver>



@property (nonatomic) BOOL cachedCarPlayAllowed; // ivar: _cachedCarPlayAllowed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CRCarPlayPreferencesDelegate> *preferencesDelegate; // ivar: _preferencesDelegate
@property (readonly) Class superclass;


-(BOOL)_isCarPlayAllowed;
-(BOOL)isCarPlayAllowed;
-(BOOL)isCarPlayCapable;
-(BOOL)isWirelessCarPlayEnabled;
-(id)init;
-(void)_updateCarPlayAllowed;
-(void)dealloc;
-(void)handleAssistantLanguageChanged:(id)arg0 ;
-(void)handleAssistantPreferencesChanged:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif