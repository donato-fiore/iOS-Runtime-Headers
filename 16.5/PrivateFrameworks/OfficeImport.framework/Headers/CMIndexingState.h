// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMINDEXINGSTATE_H
#define CMINDEXINGSTATE_H

@class NSMutableDictionary, CSSearchableItemAttributeSet, NSMutableString;


#import "CMState.h"

@interface CMIndexingState : CMState

@property (retain) NSMutableDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) CSSearchableItemAttributeSet *searchableAttributes; // ivar: _searchableAttributes
@property (retain) NSMutableString *textContent; // ivar: _textContent


-(id)init;


@end


#endif