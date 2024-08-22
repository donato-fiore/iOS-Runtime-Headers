// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXSONGBACKEND_H
#define FLEXSONGBACKEND_H

@class NSString, UIImage, NSArray, NSDictionary, NSSet;
@protocol FlexSongProtocol;

#import <Foundation/Foundation.h>


@interface FlexSongBackend : NSObject <FlexSongProtocol>



@property (retain, nonatomic) NSString *artistName; // ivar: _artistName
@property (retain, nonatomic) UIImage *artwork; // ivar: _cachedArtwork
@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (retain, nonatomic) NSString *audioEncoderPresetName; // ivar: _audioEncoderPresetName
@property (retain, nonatomic) NSDictionary *customOptions; // ivar: _customOptions
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSSet *keywords; // ivar: _keywords
@property (nonatomic) NSInteger metadataVersion; // ivar: _metadataVersion
@property (nonatomic) BOOL recalled; // ivar: _recalled
@property (nonatomic) NSInteger sampleRate; // ivar: _sampleRate
@property (retain, nonatomic) NSString *songFormat; // ivar: _songFormat
@property (retain, nonatomic) NSString *songName; // ivar: _songName
@property (retain, nonatomic) NSSet *tagIDs; // ivar: _tagIDs
@property (retain, nonatomic) NSString *uid; // ivar: _uid


-(BOOL)_verifyClips:(id)arg0 inRendition:(id)arg1 failureReason:(*id)arg2 ;
-(BOOL)_verifyKeyFrames:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)canPlay;
-(BOOL)isLoaded;
-(BOOL)verifyRendition:(id)arg0 forDuration:(struct ? )arg1 failureReason:(*id)arg2 ;
-(id)_loadArtworkImage;
-(id)assetWithID:(id)arg0 ;
-(id)existingAssetWithID:(id)arg0 ;
-(id)idealDurations;
-(id)initWithUID:(id)arg0 songName:(id)arg1 artistName:(id)arg2 tagIDs:(id)arg3 keywords:(id)arg4 hidden:(BOOL)arg5 recalled:(BOOL)arg6 audioEncoderPresetName:(id)arg7 metadataVersion:(NSInteger)arg8 songFormat:(id)arg9 sampleRate:(NSInteger)arg10 customOptions:(id)arg11 ;
-(id)renditionForDuration:(struct ? )arg0 withOptions:(id)arg1 testingContext:(id)arg2 ;
-(id)timedMetadataItemsWithIdentifier:(id)arg0 forRendition:(id)arg1 ;
-(struct ? )minimumDuration;
-(struct ? )naturalDuration;
-(void)updateAssets:(id)arg0 ;
-(void)updateSampleRate:(NSInteger)arg0 ;
-(void)updateSongArtist:(id)arg0 title:(id)arg1 tags:(id)arg2 keywords:(id)arg3 hidden:(BOOL)arg4 recalled:(BOOL)arg5 metadataVersion:(NSInteger)arg6 ;


@end


#endif