// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWCOMPOSITIONALLAYOUTMUTABLECONFIGURATION_H
#define _UICOLLECTIONVIEWCOMPOSITIONALLAYOUTMUTABLECONFIGURATION_H

@class NSArray, NSString;
@protocol _UICollectionViewCompositionalLayoutConfiguration, _UICollectionLayoutAPIRespresenting;

#import <Foundation/Foundation.h>


@interface _UICollectionViewCompositionalLayoutMutableConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, _UICollectionLayoutAPIRespresenting>



@property (copy, nonatomic) NSArray *boundarySupplementaryItems; // ivar: _boundarySupplementaryItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interSectionSpacing; // ivar: _interSectionSpacing
@property (nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection
@property (readonly) Class superclass;


+(id)defaultConfiguration;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithScrollDirection:(NSInteger)arg0 interSectionSpacing:(CGFloat)arg1 boundarySupplememtaryItems:(id)arg2 ;


@end


#endif