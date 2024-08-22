// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSSHARINGVIEWCONTROLLERSPEC_H
#define PUPHOTOSSHARINGVIEWCONTROLLERSPEC_H


#import <Foundation/Foundation.h>


@interface PUPhotosSharingViewControllerSpec : NSObject

@property (readonly, nonatomic) CGFloat interItemSpacing;
@property (readonly, nonatomic) NSUInteger optionBadgeCorner;
@property (readonly, nonatomic) CGSize optionBadgeSize;
@property (readonly, nonatomic) NSUInteger selectionBadgeCorner;
@property (readonly, nonatomic) UIOffset selectionBadgeOffset;
@property (readonly, nonatomic) CGSize selectionBadgeSize;


-(BOOL)embedsActivityViewForBounds:(struct CGRect )arg0 horizontalSizeClass:(NSInteger)arg1 verticalSizeClass:(NSInteger)arg2 ;
-(BOOL)maximizeImageHeightForBounds:(struct CGRect )arg0 ;
-(CGFloat)interItemSpacingForWidth:(CGFloat)arg0 ;


@end


#endif