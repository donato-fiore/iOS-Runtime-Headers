// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PULAYOUTSECTIONING_H
#define PULAYOUTSECTIONING_H

@protocol PULayoutSectioningDelegate;

#import <Foundation/Foundation.h>

#import "PULayoutSectioning.h"

@interface PULayoutSectioning : NSObject {
    BOOL _invalidatingSampling;
    BOOL _invalidatingSections;
}


@property (retain, nonatomic) PULayoutSectioning *baseSectioning; // ivar: _baseSectioning
@property (nonatomic) NSObject<PULayoutSectioningDelegate> *delegate; // ivar: _delegate


-(BOOL)hasSomeSampling;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(NSInteger)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath )arg0 ;
-(NSInteger)mainRealSectionForVisualSection:(NSInteger)arg0 ;
-(NSInteger)numberOfRealItemsInVisualSection:(NSInteger)arg0 ;
-(NSInteger)numberOfVisualItemsInVisualSection:(NSInteger)arg0 ;
-(NSInteger)visualSectionForRealSection:(NSInteger)arg0 ;
-(id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(BOOL)arg0 hasIncorrectSampling:(*BOOL)arg1 hasInvisibleItemsInBaseSectioning:(*BOOL)arg2 ;
-(id)description;
-(id)sectioningDescription;
-(id)sectioningHash;
-(id)sectioningHashHasIncorrectSampling:(*BOOL)arg0 hasInvisibleItemsInBaseSectioning:(*BOOL)arg1 ;
-(id)visibleUnsampledIndexesForCombinedRealSections:(id)arg0 ;
-(struct PUSimpleIndexPath )mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath )arg0 ;
-(struct PUSimpleIndexPath )visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath )arg0 isMainItem:(*BOOL)arg1 ;
-(void)_baseSectioningDidInvalidateSampling:(id)arg0 ;
-(void)_baseSectioningDidInvalidateSections:(id)arg0 ;
-(void)dealloc;
-(void)enumerateRealMainItemIndexPathsForVisualSection:(NSInteger)arg0 inVisualItemRange:(struct _NSRange )arg1 usingBlock:(id)arg2 ;
-(void)enumerateRealSectionsForVisualSection:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)invalidateSampling;
-(void)invalidateSections;


@end


#endif