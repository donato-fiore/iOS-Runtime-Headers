// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXPHOTOSSECTIONHEADERVIEWCONFIGURATION_H
#define _PXPHOTOSSECTIONHEADERVIEWCONFIGURATION_H

@class NSString, NSDate, UIImage, NSArray;
@protocol PXGSingleViewLayoutConfiguration;

#import <Foundation/Foundation.h>

#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"
#import "_PXAlbumSectionHeaderLayout.h"

@interface _PXPhotosSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration>



@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (nonatomic) BOOL allowsPhotosDetailsInteraction; // ivar: _allowsPhotosDetailsInteraction
@property (copy, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec; // ivar: _buttonSpec
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) CGFloat gradientAlpha; // ivar: _gradientAlpha
@property (retain, nonatomic) UIImage *gradientImage; // ivar: _gradientImage
@property (nonatomic) CGFloat gradientOverhang; // ivar: _gradientOverhang
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *locationNames; // ivar: _locationNames
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (weak, nonatomic) _PXAlbumSectionHeaderLayout *weakLayout; // ivar: weakLayout


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif