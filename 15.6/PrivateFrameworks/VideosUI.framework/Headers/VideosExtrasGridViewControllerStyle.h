// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASGRIDVIEWCONTROLLERSTYLE_H
#define VIDEOSEXTRASGRIDVIEWCONTROLLERSTYLE_H

@class UIColor, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "VideosExtrasGridCellStyle.h"
#import "VideosExtrasGridHeaderStyle.h"
#import "VideosExtrasGridSectionHeaderStyle.h"

@interface VideosExtrasGridViewControllerStyle : NSObject

@property (nonatomic) BOOL adjustsContentInsetByBottomNavBar; // ivar: _adjustsContentInsetByBottomNavBar
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat cellLineSpacing; // ivar: _cellLineSpacing
@property (nonatomic) UIEdgeInsets collectionViewInsets; // ivar: _collectionViewInsets
@property (nonatomic) UIEdgeInsets defaultCellSectionInsets; // ivar: _defaultCellSectionInsets
@property (retain, nonatomic) VideosExtrasGridCellStyle *defaultCellStyle; // ivar: _defaultCellStyle
@property (nonatomic) CGFloat defaultSpacing; // ivar: _defaultSpacing
@property (retain, nonatomic) NSDictionary *detailDefaultFontAttributes; // ivar: _detailDefaultFontAttributes
@property (nonatomic) UIEdgeInsets detailInsets; // ivar: _detailInsets
@property (retain, nonatomic) UIColor *detailTextColor; // ivar: _detailTextColor
@property (retain, nonatomic) NSString *detailTextStyle; // ivar: _detailTextStyle
@property (retain, nonatomic) VideosExtrasGridHeaderStyle *headerStyle; // ivar: _headerStyle
@property (nonatomic) UIEdgeInsets imageCellSectionInsets; // ivar: _imageCellSectionInsets
@property (retain, nonatomic) VideosExtrasGridCellStyle *imageCellStyle; // ivar: _imageCellStyle
@property (nonatomic) CGFloat imageSpacing; // ivar: _imageSpacing
@property (nonatomic) UIEdgeInsets productCellSectionInsets; // ivar: _productCellSectionInsets
@property (retain, nonatomic) VideosExtrasGridCellStyle *productCellStyle; // ivar: _productCellStyle
@property (nonatomic) CGFloat productSpacing; // ivar: _productSpacing
@property (retain, nonatomic) VideosExtrasGridSectionHeaderStyle *sectionHeaderStyle; // ivar: _sectionHeaderStyle
@property (nonatomic) BOOL showsScrollFade; // ivar: _showsScrollFade
@property (nonatomic) UIEdgeInsets videoCellSectionInsets; // ivar: _videoCellSectionInsets
@property (retain, nonatomic) VideosExtrasGridCellStyle *videoCellStyle; // ivar: _videoCellStyle
@property (nonatomic) CGFloat videoSpacing; // ivar: _videoSpacing




@end


#endif