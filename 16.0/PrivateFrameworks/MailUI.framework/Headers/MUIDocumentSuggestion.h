// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIDOCUMENTSUGGESTION_H
#define MUIDOCUMENTSUGGESTION_H

@class NSDate, NSURL, NSString;


#import "MUIResultSuggestion.h"

@interface MUIDocumentSuggestion : MUIResultSuggestion

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *subject; // ivar: _subject


+(id)suggestionWithFileURL:(id)arg0 name:(id)arg1 date:(id)arg2 subject:(id)arg3 authors:(id)arg4 authorEmailAddresses:(id)arg5 objectID:(id)arg6 messageList:(id)arg7 ;
-(id)category;
-(id)description;
-(id)initWithFileURL:(id)arg0 name:(id)arg1 date:(id)arg2 subject:(id)arg3 authors:(id)arg4 authorEmailAddresses:(id)arg5 objectID:(id)arg6 messageList:(id)arg7 ;


@end


#endif