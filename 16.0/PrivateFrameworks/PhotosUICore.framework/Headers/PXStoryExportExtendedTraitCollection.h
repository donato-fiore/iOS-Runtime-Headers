// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYEXPORTEXTENDEDTRAITCOLLECTION_H
#define PXSTORYEXPORTEXTENDEDTRAITCOLLECTION_H



#import "PXStoryExtendedTraitCollection.h"

@interface PXStoryExportExtendedTraitCollection : PXStoryExtendedTraitCollection

@property (readonly, nonatomic) CGRect overrideFullScreenReferenceRect; // ivar: _overrideFullScreenReferenceRect


-(id)initWithLayoutReferenceSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 overrideFullScreenReferenceRect:(struct CGRect )arg2 ;
-(struct CGRect )fullScreenReferenceRect;
-(void)performChanges:(id)arg0 ;


@end


#endif