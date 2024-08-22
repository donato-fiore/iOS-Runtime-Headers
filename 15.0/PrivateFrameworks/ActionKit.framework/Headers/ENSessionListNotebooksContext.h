// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENSESSIONLISTNOTEBOOKSCONTEXT_H
#define ENSESSIONLISTNOTEBOOKSCONTEXT_H

@class NSMutableDictionary, NSError, NSMutableArray, NSCountedSet;

#import <Foundation/Foundation.h>


@interface ENSessionListNotebooksContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *businessNotebooks; // ivar: _businessNotebooks
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableArray *linkedPersonalNotebooks; // ivar: _linkedPersonalNotebooks
@property (nonatomic) NSInteger pendingSharedNotebooks; // ivar: _pendingSharedNotebooks
@property (retain, nonatomic) NSMutableArray *resultNotebooks; // ivar: _resultNotebooks
@property (retain, nonatomic) NSCountedSet *sharedBusinessNotebookGuids; // ivar: _sharedBusinessNotebookGuids
@property (retain, nonatomic) NSMutableDictionary *sharedBusinessNotebooks; // ivar: _sharedBusinessNotebooks
@property (retain, nonatomic) NSMutableDictionary *sharedNotebooks; // ivar: _sharedNotebooks




@end


#endif