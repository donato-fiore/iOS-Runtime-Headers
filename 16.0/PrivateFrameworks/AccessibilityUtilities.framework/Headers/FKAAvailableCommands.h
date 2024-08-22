// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FKAAVAILABLECOMMANDS_H
#define FKAAVAILABLECOMMANDS_H

@class NSArray, AXSSKeyboardCommandMap, NSSet, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FKAAvailableCommands : NSObject

@property (readonly, nonatomic) NSArray *categories;
@property (retain, nonatomic) AXSSKeyboardCommandMap *commandMap;
@property (readonly, nonatomic) NSSet *commands;
@property (retain, nonatomic) id *forceTouchEnabledDidChangeObserverToken; // ivar: _forceTouchEnabledDidChangeObserverToken
@property (retain, nonatomic) NSString *siriShortcutsDidChangeObserverToken; // ivar: _siriShortcutsDidChangeObserverToken
@property (retain, nonatomic) NSMutableDictionary *tokensToUpdateBlocks; // ivar: _tokensToUpdateBlocks


+(id)sharedInstance;
-(id)_siriShortcutCommands;
-(id)init;
-(id)registerUpdateBlock:(id)arg0 ;
-(void)dealloc;
-(void)unregisterUpdateBlockWithToken:(id)arg0 ;


@end


#endif