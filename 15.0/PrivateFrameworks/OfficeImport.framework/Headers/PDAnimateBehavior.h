// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDANIMATEBEHAVIOR_H
#define PDANIMATEBEHAVIOR_H

@class NSMutableArray;


#import "PDTimeNode.h"
#import "PDAnimationTarget.h"

@interface PDAnimateBehavior : PDTimeNode {
    PDAnimationTarget *mTgtElement;
}


@property (retain, nonatomic) NSMutableArray *attributeNames; // ivar: mAttributeNames


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)target;
-(void)setTarget:(id)arg0 ;


@end


#endif