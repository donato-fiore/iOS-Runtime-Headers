// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMSEARCHSUGGESTIONQUERY_H
#define EDAMSEARCHSUGGESTIONQUERY_H

@class NSString;


#import "FATObject.h"
#import "EDAMNoteFilter.h"

@interface EDAMSearchSuggestionQuery : FATObject

@property (retain, nonatomic) EDAMNoteFilter *contextFilter; // ivar: _contextFilter
@property (retain, nonatomic) NSString *prefix; // ivar: _prefix


+(id)structFields;
+(id)structName;


@end


#endif