// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASENABLEDFILTERSARRAYDATA_H
#define ICASENABLEDFILTERSARRAYDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASEnabledFiltersArrayData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *filterType; // ivar: _filterType
@property (readonly, nonatomic) NSString *filterValue; // ivar: _filterValue


+(id)dataName;
-(id)initWithFilterType:(id)arg0 filterValue:(id)arg1 ;
-(id)toDict;


@end


#endif