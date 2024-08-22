// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EDTHREADPOSITIONCHANGESET_H
#define _EDTHREADPOSITIONCHANGESET_H

@class NSMutableDictionary, NSMutableSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EDThreadPositionChangeSet : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableDictionary *objectIDsToAddByBeforeObjectID; // ivar: _objectIDsToAddByBeforeObjectID
@property (retain, nonatomic) NSMutableSet *objectIDsToDelete; // ivar: _objectIDsToDelete
@property (retain, nonatomic) NSMutableDictionary *objectIDsToMoveByBeforeObjectID; // ivar: _objectIDsToMoveByBeforeObjectID


-(BOOL)_isMovingObjectID:(id)arg0 ;
-(BOOL)addObjectIDToAdd:(id)arg0 before:(id)arg1 ;
-(BOOL)addObjectIDToMove:(id)arg0 before:(id)arg1 ;
-(BOOL)isAddingObjectID:(id)arg0 ;
-(BOOL)isDeletingObjectID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)addObjectIDToDelete:(id)arg0 ;


@end


#endif