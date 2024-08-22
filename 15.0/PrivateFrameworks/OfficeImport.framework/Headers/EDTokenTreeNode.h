// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTOKENTREENODE_H
#define EDTOKENTREENODE_H


#import <Foundation/Foundation.h>

#import "EDTokenTreeNode.h"

@interface EDTokenTreeNode : NSObject {
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}




+(id)tokenTreeNodeWithIndexAndType:(unsigned int)arg0 type:(int)arg1 ;
-(id)description;
-(id)firstChild;
-(id)init;
-(id)initWithIndexAndType:(unsigned int)arg0 type:(int)arg1 ;
-(id)sibling;
-(unsigned int)tokenIndex;
-(void)setFirstChild:(id)arg0 ;
-(void)setSibling:(id)arg0 ;


@end


#endif