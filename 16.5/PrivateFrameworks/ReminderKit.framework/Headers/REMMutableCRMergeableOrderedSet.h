// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMMUTABLECRMERGEABLEORDEREDSET_H
#define REMMUTABLECRMERGEABLEORDEREDSET_H

@class NSString, NSMutableArray;
@protocol REMReplicaIDHelperOwner, CRUndoDelegate, REMReplicaManagerProviding;

#import <Foundation/Foundation.h>

#import "REMMutableCRUndo.h"
#import "CRDocument.h"
#import "REMReplicaIDHelper.h"
#import "REMReplicaIDSource.h"

@interface REMMutableCRMergeableOrderedSet : NSObject <REMReplicaIDHelperOwner, CRUndoDelegate>



@property (retain, nonatomic) REMMutableCRUndo *currentUndo; // ivar: _currentUndo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CRDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) REMReplicaIDHelper *replicaIDHelper; // ivar: _replicaIDHelper
@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource; // ivar: _replicaIDSource
@property (retain, nonatomic) NSObject<REMReplicaManagerProviding> *replicaManagerProvider; // ivar: _replicaManagerProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *undos; // ivar: _undos


-(BOOL)wantsUndoCommands;
-(id)addObject:(id)arg0 ;
-(id)immutableOrderedSet;
-(id)initWithReplicaIDSource:(id)arg0 immutableDocumentToEdit:(id)arg1 undos:(id)arg2 ;
-(id)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)moveObjectFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(id)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)addUndoCommandsForObject:(id)arg0 block:(id)arg1 ;
-(void)replicaIDHelperDidAcquireReplicaUUID:(id)arg0 ;
-(void)undo;
-(void)undo:(id)arg0 ;


@end


#endif