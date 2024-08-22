// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMSUGGESTIONVIEWMODEL_H
#define PXCMMSUGGESTIONVIEWMODEL_H

@class UIImage, NSArray, UIColor, NSString;
@protocol PXDisplayAsset, PXUIImageProvider;


#import "PXObservable.h"

@interface PXCMMSuggestionViewModel : PXObservable

@property (readonly, nonatomic) UIImage *combinedFaceTileImage; // ivar: _combinedFaceTileImage
@property (readonly, nonatomic) BOOL containsUnverifiedPersons; // ivar: _containsUnverifiedPersons
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, copy, nonatomic) NSArray *localizedNames; // ivar: _localizedNames
@property (readonly, nonatomic) UIColor *opaqueAncestorBackgroundColor; // ivar: _opaqueAncestorBackgroundColor
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *posterAsset; // ivar: _posterAsset
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *posterMediaProvider; // ivar: _posterMediaProvider
@property (readonly, copy, nonatomic) NSString *posterSubtitle; // ivar: _posterSubtitle
@property (readonly, copy, nonatomic) NSString *posterTitle; // ivar: _posterTitle
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle


+(CGFloat)faceTileImageDiameter;
-(id)init;
-(void)performChanges:(id)arg0 ;


@end


#endif