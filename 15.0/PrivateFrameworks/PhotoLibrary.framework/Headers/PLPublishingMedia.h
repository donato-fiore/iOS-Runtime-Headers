// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPUBLISHINGMEDIA_H
#define PLPUBLISHINGMEDIA_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface PLPublishingMedia : NSObject

@property (retain, nonatomic) id *asset; // ivar: _asset
@property (retain, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL isHDVideo; // ivar: _isHDVideo
@property (nonatomic) BOOL isVideo; // ivar: _isVideo
@property (retain, nonatomic) NSString *pathForVideoFile; // ivar: _pathForVideoFile


+(BOOL)isValidPublishingMedia:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithAVURLAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithManagedAsset:(id)arg0 ;
-(void)dealloc;


@end


#endif