// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONLISTVIEWLAYOUTMETRICS_H
#define SBICONLISTVIEWLAYOUTMETRICS_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBIconListGridCellInfo.h"

@interface SBIconListViewLayoutMetrics : NSObject <NSCopying, BSDescriptionProviding>



@property (nonatomic) BOOL adjustedIconContentScaleToFit; // ivar: _adjustedIconContentScaleToFit
@property (nonatomic) BOOL adjustedInsetsToFit; // ivar: _adjustedInsetsToFit
@property (nonatomic) CGSize alignmentIconSize; // ivar: _alignmentIconSize
@property (nonatomic) NSInteger columnOffset; // ivar: _columnOffset
@property (nonatomic) NSUInteger columns; // ivar: _columns
@property (nonatomic) NSUInteger columnsUsedForLayout; // ivar: _columnsUsedForLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBIconListGridCellInfo *gridCellInfo; // ivar: _gridCellInfo
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat iconContentScale; // ivar: _iconContentScale
@property (nonatomic) CGSize iconImageSize; // ivar: _iconImageSize
@property (nonatomic) UIEdgeInsets iconInsets; // ivar: _iconInsets
@property (nonatomic) CGSize iconSize; // ivar: _iconSize
@property (nonatomic) CGSize iconSpacing; // ivar: _iconSpacing
@property (nonatomic) BOOL needsHorizontalColumnBumps; // ivar: _needsHorizontalColumnBumps
@property (nonatomic) NSUInteger rows; // ivar: _rows
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif