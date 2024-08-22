// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TOPOPROGRESSBAR_H
#define TOPOPROGRESSBAR_H

@class CALayer;



@interface TopoProgressBar : CALayer {
    id *_owningView;
}


@property (nonatomic) id *owningView;
@property (nonatomic) float progressValue; // ivar: _progressValue


+(int)initImageCache;
+(void)deallocImageCache;
-(id)initWithOwningView:(id)arg0 ;
-(struct CGImage *)composeProgressBar;
-(struct CGSize )preferredFrameSize;
-(void)dealloc;
-(void)layoutSublayers;


@end


#endif