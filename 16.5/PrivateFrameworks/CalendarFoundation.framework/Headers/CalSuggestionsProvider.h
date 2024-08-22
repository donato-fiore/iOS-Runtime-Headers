// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALSUGGESTIONSPROVIDER_H
#define CALSUGGESTIONSPROVIDER_H

@protocol SGSuggestionsServiceEventsProtocol;

#import <Foundation/Foundation.h>


@interface CalSuggestionsProvider : NSObject

@property (retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service; // ivar: _service
@property (nonatomic) BOOL suggestionsFrameworkAvailable; // ivar: _suggestionsFrameworkAvailable


+(id)defaultProvider;
-(BOOL)eventsFoundInMailEnabled;
-(id)fakeSGRecordID;
-(id)init;
-(id)senderForEventWithSuggestionID:(id)arg0 ;
-(id)sgEventFromUniqueID:(id)arg0 error:(*id)arg1 ;
-(id)sgRecordIDForEventWithSuggestionID:(id)arg0 error:(*id)arg1 ;
-(void)_loadSuggestionsFramework;
-(void)confirmEventWithSuggestionID:(id)arg0 ;
-(void)confirmSGEventWithRecordID:(id)arg0 ;
-(void)rejectSGEventWithRecordID:(id)arg0 ;


@end


#endif