// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESECTION_H
#define RESECTION_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSArray, NSString;
@protocol RESectionDelegate, RESectionProperties;

#import <Foundation/Foundation.h>

#import "_RESectionDescriptor.h"
#import "REElementQueue.h"
#import "REMLElementComparator.h"

@interface RESection : NSObject <RESectionDelegate, RESectionProperties>

 {
    _RESectionDescriptor *_descriptor;
    REElementQueue *_queue;
    NSMutableSet *_hiddenElements;
    NSMutableDictionary *_elements;
    BOOL _allowsSubsections;
    NSMutableDictionary *_subsections;
    BOOL _performingBatch;
    NSMutableArray *_batchBlocks;
}


@property (readonly, nonatomic) NSArray *allElements;
@property (copy, nonatomic) REMLElementComparator *comparator; // ivar: _comparator
@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RESectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *elements;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maximumElements;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger visibleCount;


-(BOOL)containsElementWithId:(id)arg0 ;
-(NSInteger)_compareElement:(id)arg0 toElement:(id)arg1 level:(NSUInteger)arg2 ;
-(NSInteger)_mappedIndexFromIndex:(NSInteger)arg0 ;
-(NSInteger)indexOfElementWithId:(id)arg0 ;
-(id)_createSectionForGroup:(id)arg0 ;
-(id)_groupForIdentifier:(id)arg0 ;
-(id)_groupIdentifierForElement:(id)arg0 ;
-(id)elementIdAtIndex:(NSUInteger)arg0 ;
-(id)initWithSectionDescriptor:(id)arg0 comparator:(id)arg1 ;
-(id)section:(id)arg0 groupForIdentifier:(id)arg1 ;
-(void)_addElement:(id)arg0 forceHidden:(BOOL)arg1 ;
-(void)_performOrEnqueueBlock:(id)arg0 ;
-(void)_removeElementWithId:(id)arg0 ;
-(void)_removeSection:(id)arg0 ;
-(void)_updateElementWithId:(id)arg0 withNewFeatureSet:(id)arg1 forceHidden:(BOOL)arg2 ;
-(void)addElement:(id)arg0 forceHidden:(BOOL)arg1 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)removeElementWithId:(id)arg0 ;
-(void)sectionDidUpdateContentOrder:(id)arg0 ;
-(void)updateElementWithId:(id)arg0 withNewFeatureSet:(id)arg1 forceHidden:(BOOL)arg2 ;


@end


#endif