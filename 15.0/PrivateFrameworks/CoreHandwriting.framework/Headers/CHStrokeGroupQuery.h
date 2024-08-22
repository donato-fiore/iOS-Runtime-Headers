// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKEGROUPQUERY_H
#define CHSTROKEGROUPQUERY_H

@class NSArray, NSDictionary;


#import "CHQuery.h"

@interface CHStrokeGroupQuery : CHQuery

@property (copy, nonatomic, setter=_setStrokeGroupItems:) NSArray *strokeGroupItems; // ivar: _strokeGroupItems
@property (copy, nonatomic, setter=_setStrokeGroupItemsByID:) NSDictionary *strokeGroupItemsByID; // ivar: _strokeGroupItemsByID


-(NSInteger)q_itemTypeForStrokeGroup:(id)arg0 recognitionResult:(id)arg1 ;
-(id)debugName;
-(id)q_strokeGroupItemsFromSessionResult:(id)arg0 ;
-(id)tokenizedStrokeResultForInitialStrokes:(id)arg0 point:(struct CGPoint )arg1 tokenizationLevel:(NSInteger)arg2 ;
// -(id)tokenizedStrokeResultForInitialStrokes:(id)arg0 point:(struct CGPoint )arg1 tokenizationLevel:(NSInteger)arg2 completion:(id)arg3 shouldCancel:(unk)arg4  ;
-(void)dealloc;
-(void)q_updateQueryResult;


@end


#endif