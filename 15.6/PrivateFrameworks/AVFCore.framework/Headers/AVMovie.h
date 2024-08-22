// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMOVIE_H
#define AVMOVIE_H

@class NSURL, NSData, NSArray;
@protocol NSCopying, NSMutableCopying;


#import "AVAsset.h"
#import "AVMovieInternal.h"
#import "AVMediaDataStorage.h"

@interface AVMovie : AVAsset <NSCopying, NSMutableCopying>

 {
    AVMovieInternal *_movie;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL canContainMovieFragments;
@property (readonly, nonatomic) BOOL containsMovieFragments;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property (readonly, nonatomic) NSArray *tracks;


+(BOOL)expectsPropertyRevisedNotifications;
+(id)movieTypes;
+(id)movieWithData:(id)arg0 options:(id)arg1 ;
+(id)movieWithURL:(id)arg0 options:(id)arg1 ;
+(void)initialize;
-(BOOL)hasProtectedContent;
-(BOOL)isCompatibleWithFileType:(id)arg0 ;
-(BOOL)writeMovieHeaderToURL:(id)arg0 fileType:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(Class)_classForMovieTracks;
-(Class)_classForTrackInspectors;
-(NSUInteger)referenceRestrictions;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)_initWithFigAsset:(struct OpaqueFigAsset *)arg0 ;
-(id)_initWithFigError:(int)arg0 userInfo:(id)arg1 ;
-(id)_initWithFormatReader:(struct OpaqueFigFormatReader *)arg0 URL:(id)arg1 data:(id)arg2 options:(id)arg3 ;
-(id)_initializationOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 contentType:(id)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg0 options:(id)arg1 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)movieHeaderWithFileType:(id)arg0 error:(*id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)trackReferences;
-(id)trackWithTrackID:(int)arg0 ;
-(id)tracksWithMediaCharacteristic:(id)arg0 ;
-(id)tracksWithMediaType:(id)arg0 ;
-(struct OpaqueFigFormatReader *)_formatReader;
-(struct OpaqueFigMutableMovie *)_figMutableMovie;
-(struct OpaqueFigMutableMovie *)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader *)arg0 ;
-(struct OpaqueFigMutableMovie *)_mutableMovieForFileType:(id)arg0 ;
-(void)_startListeningToLoaderNotifications;
-(void)_stopListeningToLoaderNotifications;
-(void)dealloc;


@end


#endif