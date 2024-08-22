// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTESQUICKLOOKACTIVITYITEM_H
#define NOTESQUICKLOOKACTIVITYITEM_H

@class NSArray;
@protocol NotesQuickLookActivityItemDelegate;

#import <Foundation/Foundation.h>


@interface NotesQuickLookActivityItem : NSObject

@property (weak, nonatomic) NSObject<NotesQuickLookActivityItemDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger firstItemIndex; // ivar: _firstItemIndex
@property (retain, nonatomic) NSArray *previewItems; // ivar: _previewItems




@end


#endif