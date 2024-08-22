// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCALENDARSEARCHTASK_H
#define CALDAVCALENDARSEARCHTASK_H

@class CoreDAVTask, NSArray, NSString, NSDictionary;



@interface CalDAVCalendarSearchTask : CoreDAVTask {
    NSArray *_languages;
    NSString *_location;
    NSString *_calendarType;
}


@property (readonly, retain, nonatomic) NSDictionary *urlsToResults; // ivar: _urlsToResults


-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)httpMethod;
-(id)initWithLanguages:(id)arg0 location:(id)arg1 calendarType:(id)arg2 url:(id)arg3 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif