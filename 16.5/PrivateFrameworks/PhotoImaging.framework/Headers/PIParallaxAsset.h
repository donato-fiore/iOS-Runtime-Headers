// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXASSET_H
#define PIPARALLAXASSET_H

@class NSURL, NSString, NSArray;
@protocol PFParallaxAsset;

#import <Foundation/Foundation.h>


@interface PIParallaxAsset : NSObject <PFParallaxAsset>



@property (readonly, nonatomic) CGRect acceptableCropRect; // ivar: _acceptableRect
@property (retain, nonatomic) NSURL *cacheURL; // ivar: _cacheURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *faceRegions; // ivar: _faceRegions
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInCloud; // ivar: _isInCloud
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSArray *petRegions; // ivar: _petRegions
@property (readonly, nonatomic) CGRect preferredCropRect; // ivar: _preferredRect
@property (readonly, nonatomic) NSURL *segmentationResourceURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSegmentationResourceCaching;


-(id)initWithFileURL:(id)arg0 ;
-(int)loadParallaxResource:(NSInteger)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)loadPetsRegions:(id)arg0 ;
-(void)cancelParallaxResourceRequest:(int)arg0 ;
-(void)cancelPetsRegionsRequest:(int)arg0 ;
-(void)updateSegmentationResource:(id)arg0 ;


@end


#endif