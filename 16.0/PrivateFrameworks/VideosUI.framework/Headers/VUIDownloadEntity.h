// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIDOWNLOADENTITY_H
#define VUIDOWNLOADENTITY_H

@class NSMutableArray, NSString, NSNumber, NSArray;
@protocol VUIMediaEntityAssetControllerDelegate, NSCopying, VUIDownloadEntityDelegate, VUIMediaEntityIdentifier;

#import <Foundation/Foundation.h>


@interface VUIDownloadEntity : NSObject <VUIMediaEntityAssetControllerDelegate, NSCopying>



@property (retain, nonatomic) NSMutableArray *assetControllers; // ivar: _assetControllers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIDownloadEntityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger downloadType; // ivar: _downloadType
@property (retain, nonatomic) NSNumber *duration; // ivar: _duration
@property (retain, nonatomic) NSNumber *episodeNumber; // ivar: _episodeNumber
@property (retain, nonatomic) NSNumber *fractionalEpisodeNumber; // ivar: _fractionalEpisodeNumber
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *mediaEntities; // ivar: _mediaEntities
@property (retain, nonatomic) NSNumber *numberOfMediaItems; // ivar: _numberOfMediaItems
@property (retain, nonatomic) NSNumber *numberOfMediaItemsDownloading; // ivar: _numberOfMediaItemsDownloading
@property (retain, nonatomic) NSNumber *releaseYear; // ivar: _releaseYear
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier; // ivar: _showIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMediaEntities:(id)arg0 withDownloadType:(NSInteger)arg1 ;
-(id)initWithMediaEntity:(id)arg0 withDownloadType:(NSInteger)arg1 ;
-(void)_clearAssetControllers;
-(void)_configureWithMediaEntities:(id)arg0 ;
-(void)dealloc;
-(void)mediaEntityAssetController:(id)arg0 stateDidChange:(id)arg1 ;


@end


#endif