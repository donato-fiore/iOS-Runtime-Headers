// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFOCUSMODESMANAGER_H
#define WFFOCUSMODESMANAGER_H


#import <Foundation/Foundation.h>


@interface WFFocusModesManager : NSObject



+(id)availableModes;
+(id)availableModesForAutomationsDisplay;
+(id)defaultActivity;
+(id)enteringSymbolForSymbolName:(id)arg0 ;
+(id)exitingSymbolForSymbolName:(id)arg0 ;
+(id)glyphToFilledGlyphMapping;


@end


#endif