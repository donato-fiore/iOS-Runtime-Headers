// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPFIELDTREE_H
#define TSPFIELDTREE_H


#import <Foundation/Foundation.h>

#import "TSPFieldTreeNodeWithChildren.h"

@interface TSPFieldTree : NSObject {
    TSPFieldTreeNodeWithChildren *_rootNode;
}




-(BOOL)addField:(id)arg0 ;
-(id)init;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(struct Message *)arg0 ;


@end


#endif