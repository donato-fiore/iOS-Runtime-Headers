// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUILOCATIONSUGGESTION_H
#define MUILOCATIONSUGGESTION_H

@class NSString, NSDate;


#import "MUIResultSuggestion.h"

@interface MUILocationSuggestion : MUIResultSuggestion

@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSDate *date; // ivar: _date


+(id)suggestionWithAddress:(id)arg0 date:(id)arg1 authors:(id)arg2 authorEmailAddresses:(id)arg3 objectID:(id)arg4 messageList:(id)arg5 ;
-(id)category;
-(id)description;
-(id)initWithAddress:(id)arg0 date:(id)arg1 authors:(id)arg2 authorEmailAddresses:(id)arg3 objectID:(id)arg4 messageList:(id)arg5 ;


@end


#endif