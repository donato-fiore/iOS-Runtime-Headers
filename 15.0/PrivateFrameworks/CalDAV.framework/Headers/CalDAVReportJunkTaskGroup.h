// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVREPORTJUNKTASKGROUP_H
#define CALDAVREPORTJUNKTASKGROUP_H

@class CoreDAVTaskGroup, NSArray;



@interface CalDAVReportJunkTaskGroup : CoreDAVTaskGroup {
    NSArray *_resourceURLs;
}




-(id)initWithResourceURLs:(id)arg0 accountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;


@end


#endif