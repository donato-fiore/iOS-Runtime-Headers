// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITABLEVIEWDROPITEMIMPL_H
#define _UITABLEVIEWDROPITEMIMPL_H

@class NSString, NSIndexPath;
@protocol _UITableViewDropItem;

#import <Foundation/Foundation.h>

#import "UIDragItem.h"

@interface _UITableViewDropItemImpl : NSObject <_UITableViewDropItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDragItem *dragItem; // ivar: _dragItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize previewSize;
@property (retain, nonatomic) NSIndexPath *sourceIndexPath; // ivar: _sourceIndexPath
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_translatedSourceIndexPath, setter=_setTranslatedSourceIndexPath:) NSIndexPath *translatedSourceIndexPath; // ivar: _translatedSourceIndexPath


-(id)initWithDragItem:(id)arg0 sourceIndexPath:(id)arg1 ;
-(void)_translateSourceIndexPath:(id)arg0 ;


@end


#endif