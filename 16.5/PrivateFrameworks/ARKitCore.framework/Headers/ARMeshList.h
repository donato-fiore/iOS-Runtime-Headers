// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARMESHLIST_H
#define ARMESHLIST_H

@class NSString, NSSet, NSArray;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARMeshList : NSObject <ARResultData>

 {
    CGFloat _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CV3DReconMeshList meshList; // ivar: _meshList
@property (retain) NSSet *removedAnchors; // ivar: _removedAnchors
@property (readonly) Class superclass;
@property (retain) NSSet *updatedAnchors; // ivar: _updatedAnchors
@property (readonly, nonatomic) NSArray *visibleMeshIdentifiers; // ivar: _visibleMeshIdentifiers


-(CGFloat)timestamp;
-(void)dealloc;


@end


#endif