// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSTRIE_H
#define VSTRIE_H


#import <Foundation/Foundation.h>

#import "VSTrieNode.h"

@interface VSTrie : NSObject

@property (retain, nonatomic) VSTrieNode *root; // ivar: _root


-(id)init;
-(id)objectsMatchingPrefix:(id)arg0 ;
-(void)insertString:(id)arg0 withAssociatedObject:(id)arg1 ;


@end


#endif