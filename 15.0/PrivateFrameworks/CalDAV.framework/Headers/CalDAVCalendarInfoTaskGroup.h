// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVCALENDARINFOTASKGROUP_H
#define CALDAVCALENDARINFOTASKGROUP_H

@class CoreDAVContainerInfoTaskGroup;



@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup

@property (nonatomic) BOOL fetchSharees; // ivar: _fetchSharees


-(id)_copyContainerParserMappings;
-(id)_copyContainerWithURL:(id)arg0 andProperties:(id)arg1 ;
-(id)containerForURL:(id)arg0 ;
-(id)initWithAccountInfoProvider:(id)arg0 containerURLs:(id)arg1 taskManager:(id)arg2 ;


@end


#endif