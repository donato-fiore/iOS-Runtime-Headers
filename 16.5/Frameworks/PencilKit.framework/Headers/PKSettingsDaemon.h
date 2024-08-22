// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSETTINGSDAEMON_H
#define PKSETTINGSDAEMON_H


#import <Foundation/Foundation.h>


@interface PKSettingsDaemon : NSObject



+(BOOL)prefersPencilHoverPreviewEnabled;
+(id)daemonQueue;
// +(void)_dispatchWithErrorHandler:(id)arg0 successHandler:(unk)arg1  ;
+(void)openPencilPreferences;
+(void)prewarmServiceConnectionIfNeeded;
+(void)setCurrentScribbleLanguageIdentifiers:(id)arg0 ;
+(void)setPrefersPencilHoverPreviewEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
+(void)setPrefersPencilOnlyDrawing:(BOOL)arg0 ;


@end


#endif