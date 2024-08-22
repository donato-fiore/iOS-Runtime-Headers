// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORDATASOURCE_H
#define AVTAVATARATTRIBUTEEDITORDATASOURCE_H

@class NSArray, NSString, NSMutableDictionary;
@protocol AVTAvatarAttributeEditorModelManagerDelegateInternal, AVTTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"

@interface AVTAvatarAttributeEditorDataSource : NSObject <AVTAvatarAttributeEditorModelManagerDelegateInternal>



@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (nonatomic) NSUInteger currentCategoryIndex; // ivar: _currentCategoryIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *renderingScheduler; // ivar: _renderingScheduler
@property (retain, nonatomic) NSMutableDictionary *sectionControllers; // ivar: _sectionControllers
@property (retain, nonatomic) NSMutableDictionary *sectionCoordinatorsByProvider; // ivar: _sectionCoordinatorsByProvider
@property (readonly) Class superclass;


+(NSUInteger)indexForCurrentCategoryGivenPreferredIdentifier:(id)arg0 categories:(id)arg1 ;
+(id)sectionControllerForSection:(id)arg0 renderingScheduler:(id)arg1 environment:(id)arg2 ;
-(BOOL)shouldDisplaySectionWithDisplayCondition:(id)arg0 inCategoryAtIndex:(NSUInteger)arg1 ;
-(NSInteger)indexForSection:(id)arg0 inCategoryAtIndex:(NSInteger)arg1 ;
-(NSInteger)numberOfCategories;
-(NSInteger)numberOfSectionsForCategoryAtIndex:(NSInteger)arg0 ;
-(id)categoryAtIndex:(NSInteger)arg0 ;
-(id)currentCategoryIdentifier;
-(id)groupPickerItemsForCategories;
-(id)indexesForSectionsExcludingSectionsWithIdentifiers:(id)arg0 inCategoryAtIndex:(NSInteger)arg1 ;
-(id)indexesForSectionsPresentIn:(id)arg0 butNotIn:(id)arg1 ;
-(id)initWithCategories:(id)arg0 currentCategoryIdentifier:(id)arg1 renderingScheduler:(id)arg2 ;
-(id)initWithCategories:(id)arg0 currentCategoryIdentifier:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3 ;
-(id)sectionControllerForSection:(id)arg0 ;
-(id)sectionControllerForSectionIndex:(NSInteger)arg0 inCategoryAtIndex:(NSInteger)arg1 ;
-(id)sectionCoordinatorForSectionAtIndex:(NSInteger)arg0 inCategoryAtIndex:(NSInteger)arg1 ;
-(id)sectionForIndex:(NSInteger)arg0 inCategoryAtIndex:(NSInteger)arg1 ;
-(id)sectionProviderForSectionAtIndex:(NSInteger)arg0 inCategoryAtIndex:(NSInteger)arg1 ;
-(void)discardControllersForNonCurrentCategory;
-(void)reloadWithCategories:(id)arg0 currentCategoryIndex:(NSUInteger)arg1 ;
-(void)updateCoordinatorsFromCategory:(id)arg0 currentCoordinators:(id)arg1 ;


@end


#endif