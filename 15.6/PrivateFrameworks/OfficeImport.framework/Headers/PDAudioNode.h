// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDAUDIONODE_H
#define PDAUDIONODE_H



#import "PDMediaNode.h"

@interface PDAudioNode : PDMediaNode {
    BOOL mIsNarration;
}




-(BOOL)isNarration;
-(void)setIsNarration:(BOOL)arg0 ;


@end


#endif