// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVPROPPATCHWITHFALLBACKTASKGROUP_H
#define CALDAVPROPPATCHWITHFALLBACKTASKGROUP_H

@class CoreDAVTaskGroup, NSURL, NSSet, CoreDAVResponseItem;



@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSURL *_url;
    NSSet *_primaryElements;
    NSSet *_fallbackElements;
}


@property (retain, nonatomic) CoreDAVResponseItem *responseItem; // ivar: _responseItem


-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 primaryPropertiesToSet:(id)arg2 fallbackPropertiesToSet:(id)arg3 atURL:(id)arg4 ;
-(void)_proppatchAfterFailureCount:(NSUInteger)arg0 ;
-(void)startTaskGroup;


@end


#endif