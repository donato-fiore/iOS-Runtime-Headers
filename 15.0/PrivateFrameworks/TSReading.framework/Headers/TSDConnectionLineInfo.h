// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCONNECTIONLINEINFO_H
#define TSDCONNECTIONLINEINFO_H



#import "TSDShapeInfo.h"
#import "TSDDrawableInfo.h"

@interface TSDConnectionLineInfo : TSDShapeInfo {
    ? mInvalidFlags;
}


@property (retain, nonatomic) TSDDrawableInfo *connectedFrom; // ivar: mConnectedFrom
@property (retain, nonatomic) TSDDrawableInfo *connectedTo; // ivar: mConnectedTo


-(BOOL)canAnchor;
-(Class)layoutClass;
-(Class)repClass;
-(id)computeLayoutInfoGeometry;
-(id)copyWithContext:(id)arg0 ;
-(id)presetKind;
-(struct CGAffineTransform )computeLayoutFullTransform;
-(void)acceptVisitor:(id)arg0 ;
-(void)computeLayoutInfoGeometry:(*id)arg0 andPathSource:(*id)arg1 ;
-(void)dealloc;
-(void)didCopy;
-(void)performBlockWithTemporaryLayout:(id)arg0 ;
-(void)willCopyWithOtherDrawables:(id)arg0 ;


@end


#endif