// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYSECTIONGEOMETRYDESCRIPTOR_H
#define PXCURATEDLIBRARYSECTIONGEOMETRYDESCRIPTOR_H

@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXCuratedLibrarySectionGeometryDescriptor : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *headerAsset; // ivar: _headerAsset
@property (readonly, nonatomic) ? headerCornerRadius; // ivar: _headerCornerRadius
@property (readonly, nonatomic) CGRect headerRect; // ivar: _headerRect
@property (readonly, nonatomic) CGRect keyAssetRect; // ivar: _keyAssetRect
@property (readonly, nonatomic) CGRect sectionRect; // ivar: _sectionRect
@property (readonly, nonatomic) NSInteger visualPosition; // ivar: _visualPosition


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithSectionRect:(struct CGRect )arg0 headerRect:(struct CGRect )arg1 keyAssetRect:(struct CGRect )arg2 headerCornerRadius:(struct ? )arg3 headerAsset:(id)arg4 ;
-(id)initWithSectionRect:(struct CGRect )arg0 headerRect:(struct CGRect )arg1 keyAssetRect:(struct CGRect )arg2 headerCornerRadius:(struct ? )arg3 headerAsset:(id)arg4 visualPosition:(NSInteger)arg5 ;
-(id)sectionGeometryDescriptorOffsetBy:(struct CGPoint )arg0 ;
-(id)sectionGeometryDescriptorTransformedBy:(struct CGAffineTransform )arg0 ;
-(id)sectionGeometryDescriptorWithHeaderRect:(struct CGRect )arg0 ;
-(id)sectionGeometryDescriptorWithMaximumHeightBelowHeader:(CGFloat)arg0 ;
-(id)sectionGeometryDescriptorWithVisualPosition:(NSInteger)arg0 ;
-(struct ? )cornerRadiusForRect:(struct CGRect )arg0 ;
-(struct CGRect )resizeRect:(struct CGRect )arg0 fromGeometryDesciptor:(id)arg1 inContainer:(NSInteger)arg2 resizing:(NSUInteger)arg3 ;


@end


#endif