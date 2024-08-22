// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKQUADTREENODE_H
#define CKQUADTREENODE_H

@class NSMutableDictionary, NSArray, NSValue;

#import <Foundation/Foundation.h>

#import "CKQuadTreeNode.h"

@interface CKQuadTreeNode : NSObject {
    CKQuadTreeNode *_topRight;
    CKQuadTreeNode *_topLeft;
    CKQuadTreeNode *_bottomLeft;
    CKQuadTreeNode *_bottomRight;
    NSMutableDictionary *_userInfo;
}


@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (readonly, copy, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSValue *point; // ivar: _point


-(id)debugDescription;
-(id)debugDescriptionWithLevel:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(id)nodeForPoint:(struct CGPoint )arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)insertPoint:(struct CGPoint )arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)visit:(id)arg0 ;


@end


#endif