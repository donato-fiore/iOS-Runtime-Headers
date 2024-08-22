// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPEDITABLEQUERY_H
#define MSPEDITABLEQUERY_H

@class NSString;


#import "MSPQuery.h"
#import "_MSPQueryState.h"
#import "MSPContainer.h"

@interface MSPEditableQuery : MSPQuery {
    _MSPQueryState *_editedState;
    MSPContainer *_container;
    NSString *_context;
}




-(id)_initWithSource:(id)arg0 ;
-(id)_visibleState;
-(void)_didChangeSourceWithNewState:(id)arg0 context:(id)arg1 inContainer:(id)arg2 ;
// -(void)_performEditWithStateTransformation:(id)arg0 containerEdit:(unk)arg1  ;
-(void)deleteContentsObjectAtIndex:(NSUInteger)arg0 ;
-(void)deleteContentsObjectAtIndexes:(id)arg0 ;
-(void)moveContentsObjectAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;


@end


#endif