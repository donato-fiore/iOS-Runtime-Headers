// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMAPPSHORTCUTMANAGER_H
#define FMAPPSHORTCUTMANAGER_H


#import <Foundation/Foundation.h>


@interface FMAppShortcutManager : NSObject

@property (readonly) BOOL hasShortcutItems;


+(id)sharedInstance;
-(id)createShortcutForItem:(id)arg0 ;
-(void)clearShortcutItems;
-(void)removeShortcutItemWithIentifier:(id)arg0 ;
-(void)setShortcutItem:(id)arg0 ;
-(void)setShortcutItems:(id)arg0 ;


@end


#endif