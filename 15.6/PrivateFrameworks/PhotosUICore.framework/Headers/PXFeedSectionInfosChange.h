// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEEDSECTIONINFOSCHANGE_H
#define PXFEEDSECTIONINFOSCHANGE_H

@class NSIndexSet, NSSet;

#import <Foundation/Foundation.h>


@interface PXFeedSectionInfosChange : NSObject

@property (retain, nonatomic) NSIndexSet *deletedIndexes; // ivar: _deletedIndexes
@property (retain, nonatomic) NSIndexSet *insertedIndexes; // ivar: _insertedIndexes
@property (retain, nonatomic) NSSet *sectionInfosWithCommentChanges; // ivar: _sectionInfosWithCommentChanges
@property (nonatomic) BOOL shouldReload; // ivar: _shouldReload
@property (retain, nonatomic) NSSet *updatedAssets; // ivar: _updatedAssets
@property (retain, nonatomic) NSIndexSet *updatedIndexes; // ivar: _updatedIndexes




@end


#endif