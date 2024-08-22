// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINPUTMANAGERLOADER_H
#define TIKEYBOARDINPUTMANAGERLOADER_H

@class NSMutableDictionary, NSXPCConnection;

#import <Foundation/Foundation.h>

#import "TIKeyboardInputManagerLoaderSyncHelper.h"
#import "TIKeyboardInputManagerBase.h"

@interface TIKeyboardInputManagerLoader : NSObject {
    TIKeyboardInputManagerLoaderSyncHelper *_helper;
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}


@property (nonatomic) NSXPCConnection *interactingConnection; // ivar: _interactingConnection
@property (retain, nonatomic) TIKeyboardInputManagerBase *mostRecentlyRequested; // ivar: _mostRecentlyRequested


+(id)sharedLoader;
-(BOOL)hasActiveInputManagers;
-(BOOL)isActiveInputManager:(id)arg0 ;
-(id)activeInputModeIdentifiers;
-(id)init;
-(id)inputManagerForInputMode:(id)arg0 withKeyboardState:(id)arg1 class:(Class)arg2 ;
-(id)resourceInputModes;
-(void)cacheInputManager:(id)arg0 ;
-(void)dealloc;
-(void)jettisonAllActiveInputManagers;
-(void)reduceCacheToSize:(NSUInteger)arg0 ;
-(void)registerMaintenanceActivity;
-(void)startSyncHelper;


@end


#endif