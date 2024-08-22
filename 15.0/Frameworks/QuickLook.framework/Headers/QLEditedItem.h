// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLEDITEDITEM_H
#define QLEDITEDITEM_H

@class NSURL;
@protocol QLPreviewItem;

#import <Foundation/Foundation.h>


@interface QLEditedItem : NSObject

@property (copy, nonatomic) NSURL *editedFileURL; // ivar: _editedFileURL
@property (copy, nonatomic) NSObject<QLPreviewItem> *item; // ivar: _item


-(id)initWithItem:(id)arg0 editedFileURL:(id)arg1 ;


@end


#endif