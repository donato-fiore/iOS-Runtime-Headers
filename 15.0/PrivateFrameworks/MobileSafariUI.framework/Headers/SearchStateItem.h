// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHSTATEITEM_H
#define SEARCHSTATEITEM_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "CompletionList.h"

@interface SearchStateItem : NSObject

@property (retain, nonatomic) NSDate *cacheDate; // ivar: _cacheDate
@property (retain, nonatomic) CompletionList *completionList; // ivar: _completionList
@property (copy, nonatomic) NSString *destinationTLD; // ivar: _destinationTLD
@property (nonatomic) BOOL didOriginateFromSearchSuggestion; // ivar: _didOriginateFromSearchSuggestion
@property (nonatomic) NSInteger parsecQueryID; // ivar: _parsecQueryID




@end


#endif