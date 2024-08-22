// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPASSET_H
#define VCPASSET_H

@class NSArray, NSDictionary, PHFetchResult, NSString, NSURL, NSDate;

#import <Foundation/Foundation.h>

#import "VCPFingerprint.h"

@interface VCPAsset : NSObject

@property (readonly, nonatomic) NSArray *allScenes;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSDictionary *exif;
@property (readonly, nonatomic) float exposureTimeSeconds;
@property (readonly, nonatomic) PHFetchResult *faces;
@property (readonly, nonatomic) VCPFingerprint *fingerprint;
@property (readonly, nonatomic) BOOL hadFlash;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) BOOL isPano;
@property (readonly, nonatomic) BOOL isSDOF;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) BOOL isSlowmo;
@property (readonly, nonatomic) BOOL isTimelapse;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSURL *mainFileURL;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) float originalPhotoOffsetSeconds;
@property (readonly, nonatomic) float photoOffsetSeconds;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSDictionary *scenes;
@property (readonly, nonatomic) ? slomoRange;
@property (readonly, nonatomic) float slowmoRate;
@property (readonly, nonatomic) float timelapseRate;


+(void)unimplementedExceptionForMethodName:(id)arg0 ;
-(id)movie;
-(id)originalMovie;
-(id)streamedMovie;
-(id)typeDescription;
-(struct CGSize )originalMovieSize;
-(struct __CVBuffer *)imageWithPreferredDimension:(NSUInteger)arg0 ;
-(struct __CVBuffer *)imageWithPreferredDimension:(NSUInteger)arg0 orientation:(*unsigned int)arg1 ;


@end


#endif