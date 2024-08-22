// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSEARCHRESULTEXPOSUREDATA_H
#define ICASSEARCHRESULTEXPOSUREDATA_H

@class NSNumber, NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSearchResultExposureData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *hasNonTopHitResultsForLongestSearchString; // ivar: _hasNonTopHitResultsForLongestSearchString
@property (readonly, nonatomic) NSArray *searchBufferArray; // ivar: _searchBufferArray
@property (readonly, nonatomic) NSNumber *topHitCountForLongestSearchString; // ivar: _topHitCountForLongestSearchString


+(id)dataName;
-(id)initWithTopHitCountForLongestSearchString:(id)arg0 hasNonTopHitResultsForLongestSearchString:(id)arg1 searchBufferArray:(id)arg2 ;
-(id)toDict;


@end


#endif