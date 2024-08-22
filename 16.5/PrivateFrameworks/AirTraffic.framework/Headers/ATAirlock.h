// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATAIRLOCK_H
#define ATAIRLOCK_H

@class NSFileManager, NSString;

#import <Foundation/Foundation.h>


@interface ATAirlock : NSObject {
    NSFileManager *_fm;
    NSString *_basePath;
}




+(id)sharedInstance;
-(id)artworkPathForDataclass:(id)arg0 artworkIdentifier:(id)arg1 ;
-(id)geniusPathForDataclass:(id)arg0 geniusIdentifier:(id)arg1 ;
-(id)init;
-(id)lyricsPathForDataclass:(id)arg0 lyricsIdentifier:(id)arg1 ;
-(id)pathForAsset:(id)arg0 withDataclass:(id)arg1 ;
-(id)pathForDataclass:(id)arg0 ;
-(void)copyAssetToAirlock:(id)arg0 ;
-(void)createAirlockForDataclasses:(id)arg0 ;
-(void)evacuate;
-(void)evacuateDataclasses:(id)arg0 ;
-(void)processCompletedAsset:(id)arg0 ;
-(void)purgeAssetWithIdentifier:(id)arg0 dataclass:(id)arg1 ;


@end


#endif