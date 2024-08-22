// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REUPNEXTSETNODE_H
#define REUPNEXTSETNODE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "REUpNextSetNode.h"

@interface REUpNextSetNode : NSObject

@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (readonly, nonatomic) id *item; // ivar: _item
@property (retain, nonatomic) REUpNextSetNode *parent; // ivar: _parent
@property (nonatomic) NSUInteger rank; // ivar: _rank


-(id)initWithItem:(id)arg0 ;
-(id)rootNode;
-(void)join:(id)arg0 ;
-(void)remove;


@end


#endif