// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEGMENTATIONLAYOUTREGIONS_H
#define PISEGMENTATIONLAYOUTREGIONS_H

@class NSString, NSArray;
@protocol PFParallaxAssetRegions;

#import <Foundation/Foundation.h>


@interface PISegmentationLayoutRegions : NSObject <PFParallaxAssetRegions>



@property (readonly, nonatomic) CGRect acceptableCropRect; // ivar: _acceptableCropRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *faceRegions; // ivar: _faceRegions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *petRegions; // ivar: _petRegions
@property (readonly, nonatomic) CGRect preferredCropRect; // ivar: _preferredCropRect
@property (readonly) Class superclass;


+(id)dictionaryFromRegions:(id)arg0 ;
+(id)regionsFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAcceptableRect:(struct CGRect )arg0 preferredRect:(struct CGRect )arg1 faces:(id)arg2 pets:(id)arg3 ;


@end


#endif