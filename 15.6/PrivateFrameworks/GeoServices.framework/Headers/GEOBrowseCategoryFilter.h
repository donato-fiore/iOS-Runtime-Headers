// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOBROWSECATEGORYFILTER_H
#define GEOBROWSECATEGORYFILTER_H

@protocol GEOSearchFilter, GEOAutocompleteFilter;

#import <Foundation/Foundation.h>

#import "GEOSearchCategory.h"

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter>

 {
    GEOSearchCategory *_category;
}




-(BOOL)applyToAutocompleteParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyToSearchParameters:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCategory:(id)arg0 ;


@end


#endif