// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLCOLLECTIONVIEWCONTROLLERLAYOUTOPTIONS_H
#define HUQUICKCONTROLCOLLECTIONVIEWCONTROLLERLAYOUTOPTIONS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HUQuickControlCollectionViewControllerLayoutOptions : NSObject

@property (nonatomic) CGFloat interitemSpacingForExtraSmallControlSize; // ivar: _interitemSpacingForExtraSmallControlSize
@property (nonatomic) CGFloat interitemSpacingForLargeControlSize; // ivar: _interitemSpacingForLargeControlSize
@property (nonatomic) CGFloat interitemSpacingForRegularControlSize; // ivar: _interitemSpacingForRegularControlSize
@property (nonatomic) CGFloat interitemSpacingForSmallControlSize; // ivar: _interitemSpacingForSmallControlSize
@property (nonatomic) CGFloat minimumNavBarToControlsSpacing; // ivar: _minimumNavBarToControlsSpacing
@property (nonatomic) CGFloat minimumSectionSpacing; // ivar: _minimumSectionSpacing
@property (nonatomic) CGFloat minimumSectionToSensorSectionSpacing; // ivar: _minimumSectionToSensorSectionSpacing
@property (retain, nonatomic) NSNumber *overrideSizeSubclass; // ivar: _overrideSizeSubclass
@property (nonatomic) NSUInteger preferredLayoutStyle; // ivar: _preferredLayoutStyle
@property (nonatomic) CGFloat rowSpacing; // ivar: _rowSpacing
@property (nonatomic) CGFloat thermostatSectionSpacingOverride; // ivar: _thermostatSectionSpacingOverride
@property (nonatomic) NSUInteger titlePosition; // ivar: _titlePosition
@property (readonly, nonatomic) CGSize viewSize; // ivar: _viewSize
@property (readonly, nonatomic) NSInteger viewSizeSubclass;


+(id)defaultOptions;
+(id)defaultOptionsForViewSize:(struct CGSize )arg0 ;
-(id)initWithViewSize:(struct CGSize )arg0 ;


@end


#endif