// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMSONG_H
#define FMSONG_H

@protocol FlexSongProtocol;

#import <Foundation/Foundation.h>


@interface FMSong : NSObject

@property (readonly) NSObject<FlexSongProtocol> *backend; // ivar: _backend


+(BOOL)hasValidTagIDs:(id)arg0 ;
+(NSInteger)versionFromArtworkFilename:(id)arg0 ;
+(id)availableTagIDs;
+(id)loadSongBundleAtPath:(id)arg0 ;
+(id)loadSongsAndArtworkInFolderAtPath:(id)arg0 ;
+(id)localizedNameForTagWithID:(id)arg0 ;
-(BOOL)_loadFlexSong;
-(BOOL)canPlay;
-(BOOL)hidden;
-(BOOL)isLoaded;
-(BOOL)recalled;
-(NSInteger)metadataVersion;
-(NSInteger)sampleRate;
-(id)_impl;
-(id)artistName;
-(id)assetWithID:(id)arg0 ;
-(id)audioEncoderPresetName;
-(id)customOptions;
-(id)description;
-(id)existingAssetWithID:(id)arg0 ;
-(id)idealDurations;
-(id)initWithBackend:(id)arg0 ;
-(id)keywords;
-(id)renditionForDuration:(struct ? )arg0 withOptions:(id)arg1 ;
-(id)renditionForDuration:(struct ? )arg0 withOptions:(id)arg1 testingContext:(id)arg2 ;
-(id)songFormat;
-(id)songName;
-(id)tagIDs;
-(id)uid;
-(struct ? )minimumDuration;
-(struct ? )naturalDuration;
-(void)_loadIfNeeded;
-(void)_notifySongAssetsChanged;
-(void)cancelDownloadOfAllAssetsWithIDs:(id)arg0 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg0 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg0 withOptions:(id)arg1 ;
-(void)updateAsset:(id)arg0 downloadProgress:(CGFloat)arg1 ;
-(void)updateAssets:(id)arg0 ;
-(void)updateBackend:(id)arg0 ;


@end


#endif