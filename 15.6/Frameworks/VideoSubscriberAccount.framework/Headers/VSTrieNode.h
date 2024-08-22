// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSTRIENODE_H
#define VSTRIENODE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VSTrieNode : NSObject

@property (retain, nonatomic) NSMutableDictionary *next; // ivar: _next
@property (retain, nonatomic) NSMutableArray *objects; // ivar: _objects


-(id)init;


@end


#endif