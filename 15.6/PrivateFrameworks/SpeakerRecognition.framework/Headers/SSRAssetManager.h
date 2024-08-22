// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRASSETMANAGER_H
#define SSRASSETMANAGER_H

@class NSArray, NSString;
@protocol SSRAssetManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSRAssetManager : NSObject

@property (retain, nonatomic) NSArray *assetProviders; // ivar: _assetProviders
@property (retain, nonatomic) NSString *currentLanguageCode; // ivar: _currentLanguageCode
@property (weak, nonatomic) NSObject<SSRAssetManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedManager;
-(float)_convertVersionStringToFloat:(id)arg0 ;
-(id)_latestVersionedAssetOfType:(NSUInteger)arg0 fromProviders:(id)arg1 forLocale:(id)arg2 ;
-(id)allInstalledAssetsOfType:(NSUInteger)arg0 forLanguage:(id)arg1 ;
-(id)init;
-(id)installedAssetOfType:(NSUInteger)arg0 forLanguage:(id)arg1 ;


@end


#endif