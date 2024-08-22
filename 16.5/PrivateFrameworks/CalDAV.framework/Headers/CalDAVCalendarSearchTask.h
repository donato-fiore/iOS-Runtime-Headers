// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSEARCHTASK_H
#define CALDAVCALENDARSEARCHTASK_H

@class CoreDAVTask, NSArray, NSString, NSDictionary;



@interface CalDAVCalendarSearchTask : CoreDAVTask {
    NSArray *_languages;
    NSString *_location;
    NSString *_calendarType;
    NSUInteger _limit;
    NSDictionary *_additionalAuthenticationHeaders;
}


@property (readonly, retain, nonatomic) NSDictionary *urlsToResults; // ivar: _urlsToResults


-(id)additionalHeaderValues;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)httpMethod;
-(id)initWithLanguages:(id)arg0 location:(id)arg1 calendarType:(id)arg2 url:(id)arg3 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;
-(void)setAdditionalAuthenticationHeaders:(id)arg0 ;
-(void)setLimit:(NSUInteger)arg0 ;


@end


#endif