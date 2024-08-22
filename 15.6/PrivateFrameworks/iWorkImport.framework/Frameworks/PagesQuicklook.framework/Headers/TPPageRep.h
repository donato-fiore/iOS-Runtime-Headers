// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPAGEREP_H
#define TPPAGEREP_H

@class TSWPPageRep, CALayer, TSDFill, NSString, TPiOSMarginAdjustRep;
@protocol TSKChangeSourceObserver, TSDMasterDrawableDelegate;



@interface TPPageRep : TSWPPageRep <TSKChangeSourceObserver, TSDMasterDrawableDelegate>

 {
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    BOOL _backgroundFillRequiresLayerUpdate;
    BOOL _fillCanApplyToCALayer;
}


@property (retain, nonatomic) TSDFill *cachedBackgroundFill; // ivar: _cachedBackgroundFill
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TPiOSMarginAdjustRep *marginAdjustRep; // ivar: _marginAdjustRep
@property (readonly) Class superclass;


-(BOOL)childRepIsMasterDrawable:(id)arg0 ;
-(BOOL)childRepIsOnDocSetupCanvas:(id)arg0 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)isOpaque;
-(BOOL)masksToBounds;
-(BOOL)p_pageRequiresHorizontalSeparator;
-(id)backgroundFill;
-(id)bodyReps;
-(id)colorBehindBodyTextLayer:(id)arg0 ;
-(id)parentRepForMagnification;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)willBeRemoved;


@end


#endif