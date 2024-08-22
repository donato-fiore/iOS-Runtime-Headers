// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSHAPEREP_H
#define TSWPSHAPEREP_H

@class TSDShapeRep, NSString;
@protocol TSWPContainerTextEditingRep, TSWPShapeLayoutDelegate, TSDContainerInfo;


#import "TSWPRep.h"

@interface TSWPShapeRep : TSDShapeRep <TSWPContainerTextEditingRep, TSWPShapeLayoutDelegate>

 {
    CGPoint _originalAutosizePositionOffset;
}


@property (readonly, nonatomic) TSWPRep *containedRep; // ivar: _containedRep
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)childReps;
-(id)childRepsForHitTesting;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)layoutsForChildReps;
-(struct CGRect )reflectionFrameInRootForClipping;
-(void)dealloc;
-(void)updateChildrenFromLayout;


@end


#endif