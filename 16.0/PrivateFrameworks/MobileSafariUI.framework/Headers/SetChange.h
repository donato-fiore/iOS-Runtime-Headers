// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SETCHANGE_H
#define SETCHANGE_H

@class NSIndexSet, NSSet;

#import <Foundation/Foundation.h>


@interface SetChange : NSObject

@property (readonly, nonatomic, getter=isDeleteAll) BOOL deleteAll; // ivar: _deleteAll
@property (readonly, nonatomic) NSIndexSet *deletedIndexes; // ivar: _deletedIndexes
@property (readonly, nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (readonly, nonatomic, getter=isInsertAll) BOOL insertAll; // ivar: _insertAll
@property (readonly, nonatomic) NSIndexSet *insertedIndexes; // ivar: _insertedIndexes
@property (readonly, nonatomic) NSIndexSet *modifiedIndexes; // ivar: _modifiedIndexes
@property (readonly, nonatomic) NSSet *moves; // ivar: _moves
@property (readonly, nonatomic, getter=isSingleDelete) BOOL singleDelete; // ivar: _singleDelete


+(id)emptyChange;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChange:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initAsDeleteAllWithIndexes:(id)arg0 ;
-(id)initAsInsertAllWithIndexes:(id)arg0 ;
-(id)initWithInsertedIndexes:(id)arg0 deletedIndexes:(id)arg1 modifiedIndexes:(id)arg2 moves:(id)arg3 ;


@end


#endif