// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVMKCALENDARWITHFALLBACKTASKGROUP_H
#define CALDAVMKCALENDARWITHFALLBACKTASKGROUP_H

@class CoreDAVTaskGroup, NSURL, NSSet, NSDictionary;



@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSURL *_url;
    NSSet *_primaryElements;
}


@property (retain, nonatomic) NSSet *fallbackElements; // ivar: _fallbackElements
@property (retain, nonatomic) NSDictionary *headersToOverride; // ivar: _headersToOverride
@property (retain, nonatomic) NSDictionary *responseHeaders; // ivar: _responseHeaders
@property (nonatomic) BOOL shouldSupportVEVENT; // ivar: _shouldSupportVEVENT
@property (nonatomic) BOOL shouldSupportVTODO; // ivar: _shouldSupportVTODO


-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 primaryPropertiesToSet:(id)arg2 fallbackPropertiesToSet:(id)arg3 atURL:(id)arg4 ;
-(void)_mkcalendarAfterFailureCount:(NSUInteger)arg0 ;
-(void)startTaskGroup;


@end


#endif