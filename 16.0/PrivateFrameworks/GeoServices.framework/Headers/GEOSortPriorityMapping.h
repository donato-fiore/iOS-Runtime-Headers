// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSORTPRIORITYMAPPING_H
#define GEOSORTPRIORITYMAPPING_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOSortPriorityMapping : NSObject

@property (readonly, nonatomic) NSArray *entries; // ivar: _entries


+(NSInteger)resultSubtypeForACResultSubtype:(int)arg0 ;
+(NSInteger)resultTypeForACResultType:(int)arg0 ;
+(id)sortPriorityMappingFromDefaultsValue:(id)arg0 ;
-(id)init;
-(id)initWithAutocompleteResultSortPriorityMapping:(id)arg0 ;
-(id)initWithEntries:(id)arg0 ;


@end


#endif