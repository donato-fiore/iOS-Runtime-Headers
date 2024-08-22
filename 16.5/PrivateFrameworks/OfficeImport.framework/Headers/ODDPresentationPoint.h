// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODDPRESENTATIONPOINT_H
#define ODDPRESENTATIONPOINT_H

@class NSMutableArray;


#import "ODDPoint.h"
#import "ODDPresentationPoint.h"

@interface ODDPresentationPoint : ODDPoint {
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}




-(id)children;
-(id)parent;
-(void)addChild:(id)arg0 order:(NSUInteger)arg1 ;
-(void)setType:(int)arg0 ;


@end


#endif