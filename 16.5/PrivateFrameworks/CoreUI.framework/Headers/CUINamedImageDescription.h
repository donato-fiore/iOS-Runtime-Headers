// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDIMAGEDESCRIPTION_H
#define CUINAMEDIMAGEDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUINamedImageDescription : NSObject

@property (nonatomic) ? alignmentEdgeInsets; // ivar: _alignmentEdgeInsets
@property (copy, nonatomic) NSString *appearanceName; // ivar: _appearanceName
@property (nonatomic) int blendMode; // ivar: _blendMode
@property (nonatomic) NSInteger displayGamut; // ivar: _displayGamut
@property (nonatomic) ? edgeInsets; // ivar: _edgeInsets
@property (nonatomic) int exifOrientation; // ivar: _exifOrientation
@property (nonatomic) NSInteger idiom; // ivar: _idiom
@property (nonatomic) NSInteger imageType; // ivar: _imageType
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (nonatomic) NSInteger resizingMode; // ivar: _resizingMode
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) NSInteger sizeClassHorizontal; // ivar: _sizeClassHorizontal
@property (nonatomic) NSInteger sizeClassVertical; // ivar: _sizeClassVertical
@property (nonatomic) NSInteger subtype; // ivar: _subtype
@property (nonatomic) NSInteger templateRenderingMode; // ivar: _templateRenderingMode


-(id)description;
-(void)dealloc;


@end


#endif