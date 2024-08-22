// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCUSTOMCATEGORIES_H
#define CHCUSTOMCATEGORIES_H

@class NSError, NSDictionary, NSPersistentContainer;

#import <Foundation/Foundation.h>

#import "CHCoreDataController.h"

@interface CHCustomCategories : NSObject

@property (retain, nonatomic) CHCoreDataController *coreDataController; // ivar: _coreDataController
@property (retain, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (retain, nonatomic) NSDictionary *intToUUIDMapping; // ivar: _intToUUIDMapping
@property (retain, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer


-(id)categoryForBundleId:(id)arg0 ;
-(id)customCategoryVersion;
-(id)extractDataFromCoreDataResult:(id)arg0 ;
-(id)fetchCategoriesForBundleId:(id)arg0 ;
-(id)init;
-(id)loadMappingFromFile;
-(void)categoriesForBundleId:(id)arg0 completion:(id)arg1 ;
-(void)categoriesForBundleIdSet:(id)arg0 completion:(id)arg1 ;


@end


#endif