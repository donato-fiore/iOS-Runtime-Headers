// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYFACETILEIMAGEPROVIDERMODEL_H
#define PXSHAREDLIBRARYFACETILEIMAGEPROVIDERMODEL_H

@class UIColor, NSArray;


#import "PXObservable.h"

@interface PXSharedLibraryFaceTileImageProviderModel : PXObservable

@property (readonly, copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (readonly, nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, copy, nonatomic) NSArray *faceTileCombinerItems; // ivar: _faceTileCombinerItems
@property (readonly, nonatomic) CGFloat imageDiameter; // ivar: _imageDiameter
@property (readonly, nonatomic) CGFloat imageOffset; // ivar: _imageOffset
@property (readonly, nonatomic) BOOL includeMeContact; // ivar: _includeMeContact
@property (readonly, nonatomic) BOOL isAscending; // ivar: _isAscending
@property (readonly, nonatomic) BOOL isRTL; // ivar: _isRTL


-(id)init;
-(void)performChanges:(id)arg0 ;


@end


#endif