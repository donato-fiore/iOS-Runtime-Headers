// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDINPUTMANAGERLOADERSYNCHELPER_H
#define TIKEYBOARDINPUTMANAGERLOADERSYNCHELPER_H

@class NSMutableDictionary, NSMapTable;

#import <Foundation/Foundation.h>


@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {
    NSMutableDictionary *_languages;
    NSMapTable *_pendingSaves;
}


@property (copy, nonatomic) id *languageUpdated; // ivar: _languageUpdated


-(BOOL)shouldCacheObject:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)languagePulled:(id)arg0 ;
-(void)languagesChanged:(id)arg0 ;
-(void)noteObject:(id)arg0 forLanguage:(id)arg1 ;
-(void)willLoadLanguage:(id)arg0 ;


@end


#endif