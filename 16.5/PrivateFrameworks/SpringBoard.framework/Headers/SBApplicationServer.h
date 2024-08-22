// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONSERVER_H
#define SBAPPLICATIONSERVER_H

@class FBSServiceFacility;
@protocol SBApplicationServerHarmonyDelegate, SBApplicationServerMiscDelegate, SBApplicationServerMultitaskingShortcutDelegate, SBApplicationServerMultiwindowDelegate, SBApplicationServerShortcutDelegate;



@interface SBApplicationServer : FBSServiceFacility

@property (weak, nonatomic) NSObject<SBApplicationServerHarmonyDelegate> *harmonyDelegate; // ivar: _harmonyDelegate
@property (weak, nonatomic) NSObject<SBApplicationServerMiscDelegate> *miscDelegate; // ivar: _miscDelegate
@property (weak, nonatomic) NSObject<SBApplicationServerMultitaskingShortcutDelegate> *multitaskingShortcutDelegate; // ivar: _multitaskingShortcutDelegate
@property (weak, nonatomic) NSObject<SBApplicationServerMultiwindowDelegate> *multiwindowDelegate; // ivar: _multiwindowDelegate
@property (weak, nonatomic) NSObject<SBApplicationServerShortcutDelegate> *shortcutDelegate; // ivar: _shortcutDelegate


+(id)sharedInstance;
-(void)dealloc;
-(void)noteDidReceiveMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;


@end


#endif