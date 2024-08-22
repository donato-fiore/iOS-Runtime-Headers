// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITMATHMLTERNARYNODE_H
#define EQKITMATHMLTERNARYNODE_H

@protocol EQKitMathMLNode;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLTernaryNode : EQKitMathMLNode <EQKitMathMLNode>

 {
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
    EQKitMathMLNode *mThird;
}




-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isBaseFontNameUsed;
-(id)init;
-(id)initWithFirst:(id)arg0 second:(id)arg1 third:(id)arg2 ;
-(void)dealloc;


@end


#endif