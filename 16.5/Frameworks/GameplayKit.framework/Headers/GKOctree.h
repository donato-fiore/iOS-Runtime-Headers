// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKOCTREE_H
#define GKOCTREE_H


#import <Foundation/Foundation.h>


@interface GKOctree : NSObject {
    *void _cOctree;
}




+(id)octreeWithBoundingBox:(struct GKBox )arg0 minimumCellSize:(float)arg1 ;
-(BOOL)removeElement:(id)arg0 ;
-(BOOL)removeElement:(id)arg0 withNode:(id)arg1 ;
-(id)addElement:(id)arg0 withBox:(struct GKBox )arg1 ;
-(id)addElement:(id)arg0 withPoint;
-(id)elementsAtPoint;
-(id)elementsInBox:(struct GKBox )arg0 ;
-(id)init;
-(id)initWithBoundingBox:(struct GKBox )arg0 minimumCellSize:(float)arg1 ;
-(void)dealloc;


@end


#endif