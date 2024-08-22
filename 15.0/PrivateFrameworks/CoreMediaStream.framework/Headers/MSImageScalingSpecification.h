// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSIMAGESCALINGSPECIFICATION_H
#define MSIMAGESCALINGSPECIFICATION_H


#import <Foundation/Foundation.h>


@interface MSImageScalingSpecification : NSObject

@property (nonatomic) int assetTypeFlags; // ivar: _assetTypeFlags
@property (nonatomic) CGFloat maximumLongSideLength; // ivar: _maximumLongSideLength
@property (nonatomic) CGFloat minimumLongSideLength; // ivar: _minimumLongSideLength
@property (nonatomic) CGFloat nominalShortSideLength; // ivar: _nominalShortSideLength


+(id)assetsToGenerateFromImageWithInputSize:(struct CGSize )arg0 toConformToSpecifications:(id)arg1 ;
+(id)specificationWithSharedAlbumSpecificationString:(id)arg0 ;
-(CGFloat)scaleFactorForInputSize:(struct CGSize )arg0 ;
-(id)description;


@end


#endif