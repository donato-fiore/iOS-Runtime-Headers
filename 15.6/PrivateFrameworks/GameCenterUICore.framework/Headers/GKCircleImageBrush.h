// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCIRCLEIMAGEBRUSH_H
#define GKCIRCLEIMAGEBRUSH_H

@class NSString;
@protocol GKBrushIdentification;


#import "GKImageBrush.h"

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize sizeOverride; // ivar: _sizeOverride
@property (readonly) Class superclass;


-(CGFloat)scaleForInput:(id)arg0 ;
-(id)renderedImageIdentifier;
-(struct CGSize )sizeForInput:(id)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 withContext:(struct CGContext *)arg1 input:(id)arg2 ;


@end


#endif