// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPQUERYSOURCE_H
#define MSPQUERYSOURCE_H

@class NSHashTable, NSString;
@protocol MSPContainerObserver, MSPQuerySourceObserver;

#import <Foundation/Foundation.h>

#import "MSPContainer.h"
#import "MSPQuerySource.h"
#import "_MSPQueryState.h"

@interface MSPQuerySource : NSObject <MSPContainerObserver, MSPQuerySourceObserver>

 {
    MSPContainer *_owningContainer;
    MSPQuerySource *_parentSource;
    id *_mappingBlock;
    id *_preprocessingBlock;
    NSHashTable *_observers;
    _MSPQueryState *_state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_container;
-(id)_initWithOwningContainer:(id)arg0 ;
// -(id)_initWithParentSource:(id)arg0 preprocessingBlock:(id)arg1 mappingBlock:(unk)arg2  ;
-(id)newEditableQuery;
-(id)newQuery;
-(id)sourceByMappingContentsUsingBlock:(id)arg0 ;
// -(id)sourceByMappingContentsUsingPreprocessingBlock:(id)arg0 mappingBlock:(unk)arg1  ;
-(void)_addObserver:(id)arg0 ;
-(void)_didChangeSourceWithNewState:(id)arg0 context:(id)arg1 inContainer:(id)arg2 ;
-(void)_didReceiveContainerContents:(id)arg0 context:(id)arg1 ;
-(void)_removeObserver:(id)arg0 ;
-(void)container:(id)arg0 didEditWithNewContents:(id)arg1 orderedEdits:(id)arg2 cause:(NSInteger)arg3 context:(id)arg4 ;


@end


#endif