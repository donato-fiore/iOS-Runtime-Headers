// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLUNARYNODE_H
#define EQKITMATHMLUNARYNODE_H

@protocol EQKitMathMLNode;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLUnaryNode : EQKitMathMLNode <EQKitMathMLNode>

 {
    EQKitMathMLNode *mChild;
}




-(*void)mathMLAttributes;
-(BOOL)isBaseFontNameUsed;
-(id)init;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)initWithChild:(id)arg0 ;
-(id)initWithChildren:(id)arg0 ;
-(void)dealloc;


@end


#endif