// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWREORDEREDITEM_H
#define UICOLLECTIONVIEWREORDEREDITEM_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "UICollectionViewCell.h"

@interface UICollectionViewReorderedItem : NSObject

@property (readonly, nonatomic) UICollectionViewCell *cell; // ivar: _cell
@property (readonly, nonatomic) BOOL isUncommitted; // ivar: _isUncommitted
@property (readonly, nonatomic) NSIndexPath *lastCommittedIndexPath; // ivar: _lastCommittedIndexPath
@property (retain, nonatomic) NSIndexPath *originalIndexPath; // ivar: _originalIndexPath
@property (nonatomic) BOOL pinned; // ivar: _pinned
@property (nonatomic) CGPoint pinnedPreviousContentOffset; // ivar: _pinnedPreviousContentOffset
@property (copy, nonatomic) id *pinningTest; // ivar: _pinningTest
@property (retain, nonatomic) NSIndexPath *targetIndexPath; // ivar: _targetIndexPath


-(BOOL)isNOOP;
-(id)description;
-(id)expectedCellIndexPath;
-(id)initWithCell:(id)arg0 indexPath:(id)arg1 ;
-(void)commitTargetIndexPath;


@end


#endif