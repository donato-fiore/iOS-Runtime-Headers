// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPOICATEGORYFILTER_H
#define GEOPOICATEGORYFILTER_H

@class NSArray;
@protocol GEOSearchFilter, GEOAutocompleteFilter;

#import <Foundation/Foundation.h>


@interface GEOPOICategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter>



@property (readonly, nonatomic) NSArray *categoriesToExclude; // ivar: _categoriesToExclude
@property (readonly, nonatomic) NSArray *categoriesToInclude; // ivar: _categoriesToInclude


+(id)filterExcludingAllCategories;
+(id)filterIncludingAllCategories;
-(BOOL)applyToAutocompleteParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyToSearchParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldDisplayPOIWithType:(int)arg0 ;
-(id)initWithCategoriesToInclude:(id)arg0 categoriesToExclude:(id)arg1 ;
-(void)applyFilterToPlaceParameters:(id)arg0 ;


@end


#endif