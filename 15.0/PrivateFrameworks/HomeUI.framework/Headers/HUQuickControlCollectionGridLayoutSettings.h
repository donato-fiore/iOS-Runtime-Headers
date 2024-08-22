// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLCOLLECTIONGRIDLAYOUTSETTINGS_H
#define HUQUICKCONTROLCOLLECTIONGRIDLAYOUTSETTINGS_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface HUQuickControlCollectionGridLayoutSettings : NSObject

@property (nonatomic) NSInteger horizontalAlignment; // ivar: _horizontalAlignment
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) NSUInteger itemSize; // ivar: _itemSize
@property (nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) NSUInteger numberOfItems; // ivar: _numberOfItems
@property (nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows
@property (nonatomic) NSUInteger preferredLayoutStyle; // ivar: _preferredLayoutStyle
@property (nonatomic) CGFloat rowSpacing; // ivar: _rowSpacing
@property (retain, nonatomic) NSAttributedString *sectionAttributedHeader; // ivar: _sectionAttributedHeader
@property (retain, nonatomic) NSString *sectionHeader; // ivar: _sectionHeader
@property (retain, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) NSUInteger sectionNumber; // ivar: _sectionNumber
@property (nonatomic) CGFloat sectionTopPadding; // ivar: _sectionTopPadding
@property (nonatomic) NSUInteger titlePosition; // ivar: _titlePosition




@end


#endif