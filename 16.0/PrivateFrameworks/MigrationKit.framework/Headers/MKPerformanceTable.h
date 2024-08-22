// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPERFORMANCETABLE_H
#define MKPERFORMANCETABLE_H

@class NSString;


#import "MKTable.h"
#import "MKAnalytics.h"

@interface MKPerformanceTable : MKTable

@property (retain, nonatomic) MKAnalytics *analytics; // ivar: _analytics
@property (copy, nonatomic) NSString *basePath; // ivar: _basePath


-(id)createNumberFormatterWithLocale:(id)arg0 ;
-(id)createSizeFormatter;
-(id)createThroughputFormatter;
-(id)createTimeFormatterWithLocale:(id)arg0 ;
-(id)displayNamesByDataClass;
-(id)importTimesByDataClass;
-(id)initWithJSONFile:(id)arg0 analytics:(id)arg1 ;
-(void)generateTableFromJSONFile:(id)arg0 ;
-(void)writeToDisk;


@end


#endif