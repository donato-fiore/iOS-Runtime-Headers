// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDEPENDENCYGRAPHNODE_H
#define REDEPENDENCYGRAPHNODE_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface REDependencyGraphNode : NSObject

@property (retain, nonatomic) NSHashTable *connections; // ivar: _connections
@property (readonly, nonatomic) id *item; // ivar: _item


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithItem:(id)arg0 ;


@end


#endif