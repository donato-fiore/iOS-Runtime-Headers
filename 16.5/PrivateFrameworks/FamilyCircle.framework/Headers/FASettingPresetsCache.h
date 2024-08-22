// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASETTINGPRESETSCACHE_H
#define FASETTINGPRESETSCACHE_H

@class NSString;
@protocol FASettingPresetsCacheProtocol;

#import <Foundation/Foundation.h>


@interface FASettingPresetsCache : NSObject <FASettingPresetsCacheProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cacheQueue;
-(id)_cacheDirectoryURLWithError:(*id)arg0 ;
-(id)_cacheURL;
-(id)_cacheURLWithError:(*id)arg0 ;
-(id)_createCacheFile;
-(id)_fetchData:(*id)arg0 ;
-(id)invalidate;
-(id)load:(*id)arg0 ;
-(id)loadForURL:(id)arg0 ;
-(id)updateWithPresets:(id)arg0 requestURL:(id)arg1 ;


@end


#endif