// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MAPUPDATE_H
#define _MAPUPDATE_H

@class NSIndexPath;

#import <Foundation/Foundation.h>


@interface _MapUpdate : NSObject

@property (nonatomic) _NSRange deleteRange; // ivar: _deleteRange
@property (nonatomic) NSInteger index; // ivar: _index
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (nonatomic) _NSRange insertRange; // ivar: _insertRange
@property (nonatomic) BOOL isDelete; // ivar: _isDelete
@property (nonatomic) BOOL isInsert; // ivar: _isInsert
@property (nonatomic) BOOL isMove; // ivar: _isMove
@property (nonatomic) BOOL isSectionUpdate; // ivar: _isSectionUpdate
@property (retain, nonatomic) NSIndexPath *moveFromIndexPath; // ivar: _moveFromIndexPath
@property (nonatomic) _NSRange moveFromRange; // ivar: _moveFromRange
@property (nonatomic) NSInteger moveFromSection; // ivar: _moveFromSection
@property (retain, nonatomic) NSIndexPath *moveToIndexPath; // ivar: _moveToIndexPath
@property (nonatomic) _NSRange moveToRange; // ivar: _moveToRange
@property (nonatomic) NSInteger moveToSection; // ivar: _moveToSection
@property (nonatomic) NSInteger section; // ivar: _section


+(id)itemDeleteItemAtIndexPath:(id)arg0 index:(NSInteger)arg1 ;
+(id)itemDeleteSection:(NSInteger)arg0 deleteRange:(struct _NSRange )arg1 ;
+(id)itemInsertItemAtIndexPath:(id)arg0 index:(NSInteger)arg1 ;
+(id)itemInsertSection:(NSInteger)arg0 insertRange:(struct _NSRange )arg1 ;
+(id)itemMoveFromIndexIndexPath:(id)arg0 toIndexPath:(id)arg1 fromIndex:(NSInteger)arg2 toIndex:(NSInteger)arg3 ;
+(id)itemMoveSection:(NSInteger)arg0 toSection:(NSInteger)arg1 fromRange:(struct _NSRange )arg2 toRange:(struct _NSRange )arg3 ;
-(id)description;
-(id)reverseUpdateItem;


@end


#endif