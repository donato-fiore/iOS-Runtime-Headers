// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOVIE_H
#define MOVIE_H

@class NSURL, NSString, NSDate, CLLocation, PHAsset, NSDictionary;
@protocol PHAssetRepresentationPersistenceObserver, PHPhotoLibraryChangeObserver, NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MapLocation.h"
#import "PHAssetRepresentation.h"
#import "Project.h"

@interface Movie : NSObject <PHAssetRepresentationPersistenceObserver, PHPhotoLibraryChangeObserver, NSCoding, NSCopying>



@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *assetFingerprint; // ivar: _assetFingerprint
@property (nonatomic) int availability; // ivar: _availability
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat durationInSeconds; // ivar: _durationInSeconds
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *identifierURL; // ivar: _identifierURL
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) MapLocation *mapLocation; // ivar: _mapLocation
@property (retain, nonatomic) NSString *masterAssetFingerprint; // ivar: _masterAssetFingerprint
@property (retain, nonatomic) PHAsset *phAsset; // ivar: _phAsset
@property (retain, nonatomic) PHAssetRepresentation *phAssetRepresentation; // ivar: _phAssetRepresentation
@property (readonly) Class superclass;
@property (nonatomic) BOOL titleIsLocalizable; // ivar: _titleIsLocalizable
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (weak, nonatomic) Project *weakProject; // ivar: _weakProject


+(id)objectFromPlist:(id)arg0 inProject:(id)arg1 ;
+(void)initialize;
+(void)mediaserverdCrashed;
+(void)replaceURL:(id)arg0 withURL:(id)arg1 ;
-(BOOL)attemptRepairWithFingerprint;
-(BOOL)hasAudioTracks;
-(BOOL)hasVideoTracks;
-(BOOL)isDeleted;
-(BOOL)isHighFrameRate;
-(BOOL)isKenBurnsMovie;
-(BOOL)isMono;
-(BOOL)isOffline;
-(BOOL)isOnline;
-(BOOL)isTimelapse;
-(BOOL)isUnsupportedFormat;
-(float)frameRate;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodeIdentifierURLWithCoder:(id)arg0 ;
-(id)initWithAssetRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifierURL:(id)arg0 ;
-(id)initWithIdentifierURL:(id)arg0 userInfo:(id)arg1 ;
-(id)plistRepresentation;
-(id)resolveRelativePath:(id)arg0 ;
-(int)duration;
-(struct CGAffineTransform )transform;
-(struct CGSize )encodedPixelSize;
-(struct CGSize )encodedPixelSizeWithTransform;
-(struct CGSize )naturalSize;
-(struct CGSize )naturalSizeWithTransform;
-(unsigned int)videoCodec;
-(void)addToList;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mediaserverdCrashed;
-(void)persistenceStateOfAssetRepresentationDidChange:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)removeFromList;
-(void)replaceURL:(id)arg0 withURL:(id)arg1 ;
-(void)stealthlySetIdentifierURL:(id)arg0 ;
-(void)syncFavorite;
-(void)updateAsset;
-(void)updateCreationDate;
-(void)updateDuration;
-(void)updateFavorite;
-(void)updateLocation;
-(void)updateMetadata;


@end


#endif