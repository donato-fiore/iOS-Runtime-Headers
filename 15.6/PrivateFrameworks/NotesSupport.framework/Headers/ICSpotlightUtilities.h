// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSPOTLIGHTUTILITIES_H
#define ICSPOTLIGHTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICSpotlightUtilities : NSObject



+(NSUInteger)rankingQueryLimit;
+(id)queryFields;
+(id)rankingQueryFieldsForGenericHighlighting;
+(id)rankingQueryFieldsForSorting;
+(id)rankingQueryFieldsForWordSpecificHighlighting;
+(id)stringByEscapingSearchString:(id)arg0 ;
+(id)userActivityPersistentIdentifierForNote:(id)arg0 ;


@end


#endif