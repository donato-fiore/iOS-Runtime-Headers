// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLBINARYNODE_H
#define EQKITMATHMLBINARYNODE_H

@protocol EQKitMathMLNode;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLBinaryNode : EQKitMathMLNode <EQKitMathMLNode>

 {
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
}




-(*void)mathMLAttributes;
-(BOOL)isBaseFontNameUsed;
-(id)init;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;
-(void)dealloc;


@end


#endif