// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXLTLANGUAGEASSETMANAGER_H
#define AXLTLANGUAGEASSETMANAGER_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface AXLTLanguageAssetManager : NSObject

@property (readonly, nonatomic) BOOL languageAssetAvaliable;
@property (readonly, nonatomic) NSLocale *locale;


+(id)sharedInstance;
-(void)deleteSpeechAsset;
-(void)downloadSpeechAsset:(id)arg0 ;


@end


#endif