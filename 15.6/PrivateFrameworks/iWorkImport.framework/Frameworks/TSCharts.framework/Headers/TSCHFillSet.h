// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHFILLSET_H
#define TSCHFILLSET_H

@class NSDictionary, TSUImage, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface TSCHFillSet : NSObject {
    NSDictionary *_PListProperties;
    TSUImage *_swatchImage;
    NSMutableArray *_seriesSwatchImages;
    *CGRect _seriesSwatchImageRects;
}


@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *lookupString;
@property (readonly, nonatomic) NSString *plistPath; // ivar: _PListPath


+(struct CGSize )defaultSwatchSize;
-(BOOL)chartAlreadyMatches:(id)arg0 ;
-(NSUInteger)countOfDefinedSeriesForSeriesType:(id)arg0 ;
-(id)colorFromProperties:(id)arg0 ;
-(id)commandToApplyToChart:(id)arg0 context:(id)arg1 ;
-(id)fillForPreviewForSeriesIndex:(NSUInteger)arg0 seriesType:(id)arg1 ;
-(id)fillForSeriesIndex:(NSUInteger)arg0 seriesType:(id)arg1 context:(id)arg2 ;
-(id)fillFromSageProperties:(id)arg0 ;
-(id)fillsForDefaultSeriesType;
-(id)fillsForSeriesType:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 plistPath:(id)arg1 ;
-(id)p_propertyMapsToApplyToChart:(id)arg0 context:(id)arg1 ;
-(id)p_sagePropertiesForSeriesIndex:(NSUInteger)arg0 seriesType:(id)arg1 ;
-(id)p_sagePropertiesForSeriesType:(id)arg0 ;
-(id)p_tangierToSageProperties;
-(id)plistProperties;
-(id)propertyMutationTuplesForPreviewOnChart:(id)arg0 ;
-(id)seriesStylesForSeriesTypes:(id)arg0 context:(id)arg1 ;
-(id)seriesSwatchImageWithSwatchSize:(struct CGSize )arg0 seriesIndex:(NSUInteger)arg1 ;
-(id)styleSwapCommandToApplyToChart:(id)arg0 context:(id)arg1 ;
-(id)swatchFills;
-(id)swatchImageWithSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)p_createSeriesSwatchImagesWithSeriesCount:(NSUInteger)arg0 swatchSize:(struct CGSize )arg1 ;
-(void)primeSwatchImageCache;


@end


#endif