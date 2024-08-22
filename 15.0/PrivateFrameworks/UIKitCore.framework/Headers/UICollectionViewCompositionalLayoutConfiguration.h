// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLLECTIONVIEWCOMPOSITIONALLAYOUTCONFIGURATION_H
#define UICOLLECTIONVIEWCOMPOSITIONALLAYOUTCONFIGURATION_H

@class NSArray, NSString;
@protocol _UICollectionViewCompositionalLayoutConfiguration, NSCopying;

#import <Foundation/Foundation.h>


@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, NSCopying>



@property (copy, nonatomic) NSArray *boundarySupplementaryItems; // ivar: _boundarySupplementaryItems
@property (nonatomic) NSInteger contentInsetsReference; // ivar: _contentInsetsReference
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interSectionSpacing; // ivar: _interSectionSpacing
@property (nonatomic, getter=_safeAreaReference, setter=_setSafeAreaReference:) NSInteger safeAreaReference;
@property (nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection
@property (readonly) Class superclass;


+(id)defaultConfiguration;
-(NSUInteger)differencesFromConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithScrollDirection:(NSInteger)arg0 interSectionSpacing:(CGFloat)arg1 boundarySupplememtaryItems:(id)arg2 contentInsetsReference:(NSInteger)arg3 ;


@end


#endif