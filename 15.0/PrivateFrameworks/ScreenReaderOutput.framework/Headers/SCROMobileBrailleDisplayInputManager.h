// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROMOBILEBRAILLEDISPLAYINPUTMANAGER_H
#define SCROMOBILEBRAILLEDISPLAYINPUTMANAGER_H

@class NSMutableDictionary, NSSet, NSBundle, NSArray, NSString;
@protocol SCROBrailleDisplayInputManagerProtocol;

#import <Foundation/Foundation.h>


@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol>

 {
    NSMutableDictionary *_displayInfoDict;
    NSSet *_brailleKeys;
    NSBundle *_bundle;
    NSArray *_sixDotCommands;
    NSArray *_eightDotCommands;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(NSUInteger)countForDisplayWithToken:(int)arg0 ;
-(NSUInteger)userAssignedCommandCountForDisplayWithToken:(int)arg0 ;
-(id)_bundle;
-(id)_commandForHidUsage:(id)arg0 ;
-(id)_commandsFromBrailleInputMode:(int)arg0 ;
-(id)_eightDotCommands;
-(id)_sixDotCommands;
-(id)buttonNamesAtIndex:(NSUInteger)arg0 forDisplayWithToken:(int)arg1 ;
-(id)buttonNamesForInputIdentifier:(id)arg0 forDisplayWithToken:(int)arg1 ;
-(id)commandAtIndex:(NSUInteger)arg0 forDisplayWithToken:(int)arg1 ;
-(id)commandDictionaryForDisplayWithToken:(int)arg0 ;
-(id)commandForBrailleKey:(id)arg0 ;
-(id)driverIdentifierForDisplayWithToken:(int)arg0 ;
-(id)init;
-(id)inputIdentifierAtIndex:(NSUInteger)arg0 forDisplayWithToken:(int)arg1 ;
-(id)modelIdentifierForDisplayWithToken:(int)arg0 ;
-(id)userDefaultsForModelIdentifier:(id)arg0 ;
-(struct __CFString *)defaultsKeyForModelIdentifier:(id)arg0 ;
-(void)configureWithDriverConfiguration:(id)arg0 ;
-(void)removeAllUserAssignedCommandsForDisplayWithToken:(int)arg0 ;
-(void)setCommand:(id)arg0 forBrailleKey:(id)arg1 ;
-(void)setCommand:(id)arg0 forInputIdentifier:(id)arg1 forDisplayWithToken:(int)arg2 ;
-(void)setUserDefaults:(id)arg0 forModelIdentifier:(id)arg1 ;


@end


#endif