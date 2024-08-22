// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USOGRAPHNODE_H
#define USOGRAPHNODE_H


#import <Foundation/Foundation.h>


@interface USOGraphNode : NSObject {
    ? _usoGraphNode;
}




-(id)initWithCppGraphNode:(struct UsoGraphNode *)arg0 ;
-(void)setSuccessor:(*void)arg0 successor:(id)arg1 enumeration:(unsigned int)arg2 ;


@end


#endif