// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PISEGMENTATIONNULLASSET_H
#define _PISEGMENTATIONNULLASSET_H

@class NSString, NSArray, NSURL;
@protocol PFParallaxAsset;

#import <Foundation/Foundation.h>


@interface _PISegmentationNullAsset : NSObject <PFParallaxAsset>



@property (readonly, nonatomic) CGRect acceptableCropRect; // ivar: acceptableCropRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *faceRegions; // ivar: faceRegions
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSArray *petRegions; // ivar: petRegions
@property (readonly, nonatomic) CGRect preferredCropRect; // ivar: preferredCropRect
@property (readonly, nonatomic) NSURL *segmentationResourceURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSegmentationResourceCaching;


-(int)loadParallaxResource:(NSInteger)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)loadPetsRegions:(id)arg0 ;
-(void)cancelParallaxResourceRequest:(int)arg0 ;
-(void)cancelPetsRegionsRequest:(int)arg0 ;
-(void)updateSegmentationResource:(id)arg0 ;


@end


#endif