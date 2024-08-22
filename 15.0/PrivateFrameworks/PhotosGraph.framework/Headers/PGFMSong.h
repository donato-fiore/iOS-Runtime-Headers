// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFMSONG_H
#define PGFMSONG_H

@class FMSong;

#import <Foundation/Foundation.h>


@interface PGFMSong : NSObject

@property (readonly, nonatomic) FMSong *wrappedSong; // ivar: _wrappedSong


+(id)availableTagIDs;
+(id)localizedNameForTagWithID:(id)arg0 ;
-(BOOL)canPlay;
-(BOOL)hidden;
-(BOOL)isLoaded;
-(BOOL)recalled;
-(NSInteger)metadataVersion;
-(NSInteger)sampleRate;
-(id)_valueAssociatedWithTagPrefix:(id)arg0 ;
-(id)arousal;
-(id)artistName;
-(id)artwork;
-(id)assetWithID:(id)arg0 ;
-(id)audioEncoderPresetName;
-(id)description;
-(id)idealDurations;
-(id)initWithFMSong:(id)arg0 ;
-(id)keywords;
-(id)renditionForDuration:(struct ? )arg0 withOptions:(id)arg1 ;
-(id)songFormat;
-(id)songName;
-(id)tagIDs;
-(id)uid;
-(id)valence;
-(struct ? )minimumDuration;
-(struct ? )naturalDuration;
-(void)cancelDownloadOfAllAssetsWithIDs:(id)arg0 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg0 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg0 withOptions:(id)arg1 ;


@end


#endif