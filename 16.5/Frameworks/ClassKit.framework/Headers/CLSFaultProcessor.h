// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSFAULTPROCESSOR_H
#define CLSFAULTPROCESSOR_H

@class NSMutableArray, NSMapTable, NSMutableOrderedSet, NSString;
@protocol CLSQuery, OS_dispatch_queue, OS_dispatch_group, CLSFaultProcessorDelegate;

#import <Foundation/Foundation.h>


@interface CLSFaultProcessor : NSObject <CLSQuery>

 {
    NSMutableArray *_results;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSMapTable *_objects;
    NSMapTable *_relations;
    NSMapTable *_objectsIdsByParentID;
    NSMutableOrderedSet *_rootObjectIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CLSFaultProcessorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)rootClasses;
-(BOOL)_isRootObject:(id)arg0 ;
-(BOOL)_isRootObject:(id)arg0 withRelation:(id)arg1 ;
-(BOOL)waitUntilDone:(CGFloat)arg0 ;
-(id)_childParentRelationForObject:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_addObject:(id)arg0 ;
-(void)_descendIntoObject:(id)arg0 idsToProcess:(id)arg1 enumerationBlock:(id)arg2 ;
-(void)_faultObjectsBatch:(id)arg0 ;
-(void)_faultRelation:(id)arg0 fromObject:(id)arg1 ;
-(void)_inGroup:(id)arg0 ;
-(void)_insertRootObject:(id)arg0 ;
-(void)_insertRootObjectID:(id)arg0 withChildren:(id)arg1 ;
-(void)clientRemote_deliverObject:(id)arg0 ;
-(void)clientRemote_finishWithOffset:(NSUInteger)arg0 error:(id)arg1 ;
-(void)clientRemote_invalidate;
-(void)clientRemote_itemChanged:(NSUInteger)arg0 ;
-(void)completionNotify:(id)arg0 ;
-(void)enumerate:(id)arg0 ;
-(void)faultObject:(id)arg0 ;
-(void)faultObjects:(id)arg0 ;


@end


#endif