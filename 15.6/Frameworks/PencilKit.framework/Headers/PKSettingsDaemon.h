// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSETTINGSDAEMON_H
#define PKSETTINGSDAEMON_H


#import <Foundation/Foundation.h>


@interface PKSettingsDaemon : NSObject



+(id)daemonQueue;
+(void)openPencilPreferences;
+(void)setCurrentScribbleLanguageIdentifiers:(id)arg0 ;
+(void)setPrefersPencilOnlyDrawing:(BOOL)arg0 ;


@end


#endif