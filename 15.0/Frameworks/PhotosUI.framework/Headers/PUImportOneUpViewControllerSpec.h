// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMPORTONEUPVIEWCONTROLLERSPEC_H
#define PUIMPORTONEUPVIEWCONTROLLERSPEC_H

@class PXFeatureSpec;



@interface PUImportOneUpViewControllerSpec : PXFeatureSpec

@property (readonly, nonatomic) BOOL allowsInterfaceRotation; // ivar: _allowsInterfaceRotation
@property (readonly, nonatomic) CGFloat interItemSpacing; // ivar: _interItemSpacing
@property (readonly, nonatomic) NSUInteger selectionBadgeCorner; // ivar: _selectionBadgeCorner
@property (readonly, nonatomic) UIOffset selectionBadgeOffset; // ivar: _selectionBadgeOffset
@property (readonly, nonatomic) CGSize selectionBadgeSize; // ivar: _selectionBadgeSize
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 style:(NSUInteger)arg2 ;


@end


#endif