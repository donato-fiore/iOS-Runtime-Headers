// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MSPQUERYSTATE_H
#define _MSPQUERYSTATE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _MSPQueryState : NSObject

@property (readonly) NSArray *contents; // ivar: _contents
@property (readonly) NSArray *identifiers; // ivar: _identifiers


-(id)initWithContainerContents:(id)arg0 ;
-(id)initWithContents:(id)arg0 identifiers:(id)arg1 ;
-(id)stateByDeletingObjectAtIndex:(NSUInteger)arg0 ;
-(id)stateByDeletingObjectsAtIndexes:(id)arg0 ;
// -(id)stateByInvokingPreprocessingBlock:(id)arg0 mappingBlock:(unk)arg1  ;
-(id)stateByMovingObjectAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;


@end


#endif