// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTELIST_H
#define EDAMNOTELIST_H

@class NSArray, NSNumber;


#import "FATObject.h"

@interface EDAMNoteList : FATObject

@property (retain, nonatomic) NSArray *notes; // ivar: _notes
@property (retain, nonatomic) NSArray *searchedWords; // ivar: _searchedWords
@property (retain, nonatomic) NSNumber *startIndex; // ivar: _startIndex
@property (retain, nonatomic) NSArray *stoppedWords; // ivar: _stoppedWords
@property (retain, nonatomic) NSNumber *totalNotes; // ivar: _totalNotes
@property (retain, nonatomic) NSNumber *updateCount; // ivar: _updateCount


+(id)structFields;
+(id)structName;


@end


#endif