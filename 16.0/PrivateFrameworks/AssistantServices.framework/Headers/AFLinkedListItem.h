// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFLINKEDLISTITEM_H
#define AFLINKEDLISTITEM_H


#import <Foundation/Foundation.h>

#import "AFLinkedListItem.h"

@interface AFLinkedListItem : NSObject

@property (retain, nonatomic) AFLinkedListItem *nextItem; // ivar: _nextItem
@property (readonly, nonatomic) id *object; // ivar: _object
@property (retain, nonatomic) AFLinkedListItem *previousItem; // ivar: _previousItem


-(id)initWithObject:(id)arg0 ;
-(void)insertAfterItem:(id)arg0 ;
-(void)insertBeforeItem:(id)arg0 ;
-(void)removeFromList;


@end


#endif