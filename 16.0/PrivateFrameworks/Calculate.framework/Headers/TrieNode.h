// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIENODE_H
#define TRIENODE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TrieNode : NSObject

@property (retain, nonatomic) NSMutableDictionary *childNodes; // ivar: _childNodes
@property (retain, nonatomic) id *object; // ivar: _object


-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 create:(BOOL)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif