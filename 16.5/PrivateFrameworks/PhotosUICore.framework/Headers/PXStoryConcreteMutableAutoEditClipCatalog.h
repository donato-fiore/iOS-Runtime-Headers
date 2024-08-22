// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETEMUTABLEAUTOEDITCLIPCATALOG_H
#define PXSTORYCONCRETEMUTABLEAUTOEDITCLIPCATALOG_H



#import "PXStoryConcreteAutoEditClipCatalog.h"

@interface PXStoryConcreteMutableAutoEditClipCatalog : PXStoryConcreteAutoEditClipCatalog



-(void)addClip:(id)arg0 ;
-(void)composeClipsInRange:(struct _NSRange )arg0 ;
-(void)enumerateMutableClipsUsingBlock:(id)arg0 ;
-(void)enumeratePairsOfMutableClipsUsingBlock:(id)arg0 ;
-(void)updateClipAtIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)updateClipForDisplayAsset:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif