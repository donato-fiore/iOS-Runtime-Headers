// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGBESTOFTIMEMEMORYTITLEGENERATOR_H
#define PGBESTOFTIMEMEMORYTITLEGENERATOR_H

@class NSDate;


#import "PGTitleGenerator.h"

@interface PGBestOfTimeMemoryTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSInteger year; // ivar: _year


-(id)_bestOfPastTimeTitle;
-(id)_bestOfYearTitle;
-(id)_generateSubtitle;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)initWithYear:(NSInteger)arg0 titleGenerationContext:(id)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif