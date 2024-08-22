// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITORPRELOADER_H
#define AVTAVATARATTRIBUTEEDITORPRELOADER_H

@class NSMutableDictionary;
@protocol AVTUILogger;

#import <Foundation/Foundation.h>

#import "AVTPresetResourceLoader.h"

@interface AVTAvatarAttributeEditorPreloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *cancelationTokens; // ivar: _cancelationTokens
@property (retain, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (retain, nonatomic) AVTPresetResourceLoader *resourceLoader; // ivar: _resourceLoader


-(id)initWithResourceLoader:(id)arg0 logger:(id)arg1 ;
-(void)cancelAllPreloading;
-(void)cancelPreloadForSectionItemIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)preloadCategory:(id)arg0 ;
-(void)preloadSectionItem:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif