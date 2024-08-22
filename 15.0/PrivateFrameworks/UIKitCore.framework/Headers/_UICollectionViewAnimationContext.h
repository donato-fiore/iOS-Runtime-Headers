// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWANIMATIONCONTEXT_H
#define _UICOLLECTIONVIEWANIMATIONCONTEXT_H

@class NSArray, NSMutableDictionary, NSDictionary, NSString;
@protocol _UICollectionViewAnimationContext, _UICollectionViewUpdateTranslating;

#import <Foundation/Foundation.h>

#import "UICollectionViewLayout.h"

@interface _UICollectionViewAnimationContext : NSObject <_UICollectionViewAnimationContext>

 {
    NSArray *_updates;
    NSMutableDictionary *_appearingAttributesDict;
    NSMutableDictionary *_disappearingAttributesDict;
}


@property (retain, nonatomic) NSDictionary *animationsForOnScreenViews; // ivar: _animationsForOnScreenViews
@property (retain, nonatomic) NSDictionary *appearingAnimations; // ivar: _appearingAnimations
@property (copy, nonatomic) NSArray *appearingAttributes;
@property (retain, nonatomic) NSArray *currentlyVisibleItemIndexPaths; // ivar: _currentlyVisibleItemIndexPaths
@property (readonly, nonatomic) NSObject<_UICollectionViewUpdateTranslating> *dataSourceTranslator; // ivar: _dataSourceTranslator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *disappearingAnimations; // ivar: _disappearingAnimations
@property (copy, nonatomic) NSArray *disappearingAttributes;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UICollectionViewLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSArray *previouslyVisibleItemIndexPaths; // ivar: _previouslyVisibleItemIndexPaths
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *updates;


-(NSInteger)finalGlobalIndexForInitialGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)finalSectionCount;
-(NSInteger)finalSectionIndexForInitialSectionIndex:(NSInteger)arg0 ;
-(NSInteger)initialGlobalIndexForFinalGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)initialSectionCount;
-(NSInteger)initialSectionIndexForFinalSectionIndex:(NSInteger)arg0 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg0 ;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg0 forInitialIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)initWithDataSourceTranslator:(id)arg0 updates:(id)arg1 layout:(id)arg2 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg0 ;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg0 forFinalIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(struct _NSRange )finalSectionGlobalItemRangeForSection:(NSInteger)arg0 ;
-(struct _NSRange )initalSectionGlobalItemRangeForSection:(NSInteger)arg0 ;


@end


#endif