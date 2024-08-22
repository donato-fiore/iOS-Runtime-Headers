// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITABBARLAYOUTDATA_H
#define _UITABBARLAYOUTDATA_H

@class UIBarAppearanceData;


#import "UIImage.h"
#import "UIColor.h"

@interface _UITabBarLayoutData : UIBarAppearanceData

@property (nonatomic) NSInteger itemPositioning; // ivar: _itemPositioning
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (nonatomic) CGFloat itemWidth; // ivar: _itemWidth
@property (retain, nonatomic) UIImage *selectionIndicatorImage; // ivar: _selectionIndicatorImage
@property (copy, nonatomic) UIColor *selectionIndicatorTintColor; // ivar: _selectionIndicatorTintColor


+(id)decodeFromCoder:(id)arg0 prefix:(id)arg1 ;
+(id)standardLayoutData;
-(BOOL)checkEqualTo:(id)arg0 ;
-(NSInteger)hashInto:(NSInteger)arg0 ;
-(NSInteger)positioningForTraitCollection:(id)arg0 ;
-(id)replicate;
-(void)describeInto:(id)arg0 ;
-(void)encodeToCoder:(id)arg0 prefix:(id)arg1 ;


@end


#endif