// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUITEMLISTGROUP_H
#define SUITEMLISTGROUP_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "SUItem.h"

@interface SUItemListGroup : NSObject

@property (readonly, nonatomic) NSString *indexBarTitle;
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) SUItem *separatorItem; // ivar: _separatorItem


-(id)description;
-(void)dealloc;


@end


#endif