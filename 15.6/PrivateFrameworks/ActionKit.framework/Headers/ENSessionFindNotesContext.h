// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENSESSIONFINDNOTESCONTEXT_H
#define ENSESSIONFINDNOTESCONTEXT_H

@class NSArray, NSMutableArray, NSSet;

#import <Foundation/Foundation.h>

#import "EDAMNoteFilter.h"
#import "EDAMNotesMetadataResultSpec.h"
#import "ENNotebook.h"

@interface ENSessionFindNotesContext : NSObject

@property (retain, nonatomic) NSArray *allNotebooks; // ivar: _allNotebooks
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSMutableArray *findMetadataResults; // ivar: _findMetadataResults
@property (retain, nonatomic) NSMutableArray *linkedNotebooksToSearch; // ivar: _linkedNotebooksToSearch
@property (nonatomic) NSUInteger maxResults; // ivar: _maxResults
@property (retain, nonatomic) EDAMNoteFilter *noteFilter; // ivar: _noteFilter
@property (nonatomic) BOOL requiresLocalMerge; // ivar: _requiresLocalMerge
@property (retain, nonatomic) NSSet *resultGuidsFromBusiness; // ivar: _resultGuidsFromBusiness
@property (retain, nonatomic) EDAMNotesMetadataResultSpec *resultSpec; // ivar: _resultSpec
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (retain, nonatomic) ENNotebook *scopeNotebook; // ivar: _scopeNotebook
@property (nonatomic) BOOL sortAscending; // ivar: _sortAscending
@property (nonatomic) NSUInteger sortOrder; // ivar: _sortOrder




@end


#endif