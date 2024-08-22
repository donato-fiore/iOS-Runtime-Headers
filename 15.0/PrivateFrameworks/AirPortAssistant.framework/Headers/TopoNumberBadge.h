// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TOPONUMBERBADGE_H
#define TOPONUMBERBADGE_H

@class CALayer, UIFont;



@interface TopoNumberBadge : CALayer {
    id *_owningView;
    CGSize _imageSize;
    CGSize _textSize;
    UIFont *_font;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) id *owningView;


+(id)imageBadgeForCount:(NSInteger)arg0 ;
+(int)initImageCache;
+(void)deallocImageCache;
-(id)initWithOwningView:(id)arg0 ;
-(struct CGImage *)newNumberBadge;
-(struct CGSize )preferredFrameSize;
-(void)calculateBadgeMetrics;
-(void)dealloc;
-(void)layoutSublayers;


@end


#endif