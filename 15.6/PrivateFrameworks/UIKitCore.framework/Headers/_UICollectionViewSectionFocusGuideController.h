// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWSECTIONFOCUSGUIDECONTROLLER_H
#define _UICOLLECTIONVIEWSECTIONFOCUSGUIDECONTROLLER_H

@class NSMapTable, NSIndexPath, NSUUID;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"

@interface _UICollectionViewSectionFocusGuideController : NSObject

@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSMapTable *focusGuideFromSectionMap; // ivar: _focusGuideFromSectionMap
@property (retain, nonatomic) NSMapTable *focusGuideToSectionMap; // ivar: _focusGuideToSectionMap
@property (retain, nonatomic) NSIndexPath *focusedIndexPath; // ivar: _focusedIndexPath
@property (retain, nonatomic) NSUUID *lastUpdateIdentifier; // ivar: _lastUpdateIdentifier
@property (nonatomic) NSInteger pivotSection; // ivar: _pivotSection


-(id)_createOrUpdateSectionFocusGuidePackageForSection:(NSInteger)arg0 ;
-(id)_focusGuides;
-(id)_sectionFocusGuidePackageForSection:(NSInteger)arg0 ;
-(id)_sectionsToLoad;
-(id)initWithCollectionView:(id)arg0 ;
-(struct CGRect )_sectionEndFrameForSection:(NSInteger)arg0 layout:(id)arg1 ;
-(struct CGRect )_sectionFrameForSection:(NSInteger)arg0 layout:(id)arg1 ;
-(void)_layoutSectionFocusGuide:(id)arg0 forSection:(NSInteger)arg1 inLayout:(id)arg2 ;
-(void)_layoutSectionFocusGuide:(id)arg0 forSection:(NSInteger)arg1 withFrame:(struct CGRect )arg2 ;
-(void)_removeSectionFocusGuidesForSection:(NSInteger)arg0 ;
-(void)_updatePivotSection;
-(void)_updateSectionEndFocusGuideForSection:(NSInteger)arg0 inPackage:(id)arg1 layout:(id)arg2 ;
-(void)cleanupSectionFocusGuides;
-(void)performLayout;
-(void)reloadSectionFocusGuides;
-(void)updateFocusedIndexPath:(id)arg0 ;


@end


#endif