// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLRELATIONSHIPORDERINGSTATE_H
#define PLRELATIONSHIPORDERINGSTATE_H


#import <Foundation/Foundation.h>


@interface PLRelationshipOrderingState : NSObject {
    id *_oids;
    id *_foks;
    BOOL _isMutable;
}




-(BOOL)setOrderValue:(NSInteger)arg0 forObjectID:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(NSUInteger)findIndexForObjectID:(id)arg0 newOrderValue:(NSInteger)arg1 hasOrderValueConflictWithObjectID:(*id)arg2 ;
-(NSUInteger)indexForObjectID:(id)arg0 ;
-(id)description;
-(id)initWithObjectIDs:(id)arg0 orderValues:(id)arg1 ;
-(id)objectIDs;
-(id)orderKeys;


@end


#endif