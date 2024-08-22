// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSIRISHORTCUTSMANAGER_H
#define AXSIRISHORTCUTSMANAGER_H

@class NSArray, NSMutableDictionary, VCVoiceShortcutClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXSiriShortcutsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_shortcuts;
    NSMutableDictionary *_updateBlocks;
    int _contentProtectionNotifyToken;
}


@property (retain, nonatomic) VCVoiceShortcutClient *shortcutClient; // ivar: _shortcutClient
@property (readonly, nonatomic) NSArray *shortcuts;


+(id)sharedManager;
-(id)init;
-(id)registerShortcutsDidChangeBlock:(id)arg0 ;
-(id)shortcutForIdentifier:(id)arg0 ;
-(void)_loadShortcuts;
-(void)dealloc;
-(void)handleVoiceShortcutClientDataUpdateNotification:(id)arg0 ;
-(void)performShortcut:(id)arg0 ;
-(void)unregisterShortcutsDidChangeBlock:(id)arg0 ;


@end


#endif