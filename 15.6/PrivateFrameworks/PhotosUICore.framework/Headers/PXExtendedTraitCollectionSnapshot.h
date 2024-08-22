// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXEXTENDEDTRAITCOLLECTIONSNAPSHOT_H
#define PXEXTENDEDTRAITCOLLECTIONSNAPSHOT_H


#import <Foundation/Foundation.h>


@interface PXExtendedTraitCollectionSnapshot : NSObject

@property (readonly, nonatomic) NSInteger contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, nonatomic) CGRect fullScreenReferenceRect; // ivar: _fullScreenReferenceRect
@property (readonly, nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (readonly, nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (readonly, nonatomic) CGSize layoutReferenceSize; // ivar: _layoutReferenceSize
@property (readonly, nonatomic) NSInteger layoutSizeClass; // ivar: _layoutSizeClass
@property (readonly, nonatomic) NSInteger layoutSizeSubclass; // ivar: _layoutSizeSubclass
@property (readonly, nonatomic) UIEdgeInsets peripheryInsets; // ivar: _peripheryInsets
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) NSInteger userInterfaceFeature; // ivar: _userInterfaceFeature
@property (readonly, nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom
@property (readonly, nonatomic) NSInteger userInterfaceLevel; // ivar: _userInterfaceLevel
@property (readonly, nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (readonly, nonatomic) NSInteger windowOrientation; // ivar: _windowOrientation
@property (readonly, nonatomic) CGSize windowReferenceSize; // ivar: _windowReferenceSize


-(id)_initWithExtendedTraitCollection:(id)arg0 ;


@end


#endif