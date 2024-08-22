// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKAGGREGATEMAPPING_H
#define GKAGGREGATEMAPPING_H

@class NSString, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GKCollectionViewDataSource.h"

@interface GKAggregateMapping : NSObject <NSCopying>



@property (retain, nonatomic) GKCollectionViewDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSString *dynamicTag; // ivar: _dynamicTag
@property (retain, nonatomic) NSMutableDictionary *globalSectionsToTags; // ivar: _globalSectionsToTags
@property (retain, nonatomic) NSMutableDictionary *globalToLocalSections; // ivar: _globalToLocalSections
@property (retain, nonatomic) NSMutableDictionary *localToGlobalSections; // ivar: _localToGlobalSections
@property (nonatomic) NSInteger sectionCount; // ivar: _sectionCount


-(NSUInteger)globalSectionForLocalSection:(NSUInteger)arg0 ;
-(NSUInteger)localSectionForGlobalSection:(NSUInteger)arg0 ;
-(NSUInteger)updateMappingsStartingWithGlobalSection:(NSUInteger)arg0 ;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)globalIndexPathForLocalIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithGlobalToLocalMapping:(id)arg0 ;
-(id)localIndexPathForGlobalIndexPath:(id)arg0 ;
-(id)tagForGlobalSection:(NSInteger)arg0 ;
-(void)addMappingFromGlobalSection:(NSUInteger)arg0 toLocalSection:(NSUInteger)arg1 withTag:(id)arg2 ;


@end


#endif