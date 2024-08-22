// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADCLIENTCALENDARDIRECTORYSEARCHRESPONSEDELEGATE_H
#define DADCLIENTCALENDARDIRECTORYSEARCHRESPONSEDELEGATE_H

@class NSSet, NSString;
@protocol DAEventsCalendarDirectorySearchResponseConsumer, DASearchQueryConsumer;


#import "DADClientDelegate.h"

@interface DADClientCalendarDirectorySearchResponseDelegate : DADClientDelegate <DAEventsCalendarDirectorySearchResponseConsumer, DASearchQueryConsumer>

 {
    NSSet *_terms;
    NSSet *_recordTypes;
    NSUInteger _resultLimit;
    id *_searchID;
    BOOL _exceededResultLimit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_convertSearchQueryResults:(id)arg0 ;
-(id)initWithAccountID:(id)arg0 client:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(NSUInteger)arg4 ;
-(void)calendarDirectorySearchFinishedWithError:(id)arg0 exceededResultLimit:(BOOL)arg1 ;
-(void)calendarDirectorySearchReturnedResults:(id)arg0 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)performRequest;
-(void)searchQuery:(id)arg0 finishedWithError:(id)arg1 ;
-(void)searchQuery:(id)arg0 returnedResults:(id)arg1 ;


@end


#endif