// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMEDIACOMPONENTVIEW_H
#define SXMEDIACOMPONENTVIEW_H

@class NSString;
@protocol SXViewportChangeListener, SXAnalyticsReporting;


#import "SXComponentView.h"
#import "SXMediaExposureEvent.h"

@interface SXMediaComponentView : SXComponentView <SXViewportChangeListener>



@property (readonly, nonatomic) NSObject<SXAnalyticsReporting> *analyticsReporting; // ivar: _analyticsReporting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDisplayingMedia; // ivar: _isDisplayingMedia
@property (nonatomic) CGFloat maximumVisibleY; // ivar: _maximumVisibleY
@property (retain, nonatomic) SXMediaExposureEvent *mediaExposureEvent; // ivar: _mediaExposureEvent
@property (nonatomic) CGFloat minimumVisibleY; // ivar: _minimumVisibleY
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleBounds; // ivar: _visibleBounds


-(BOOL)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect )arg0 ;
-(NSUInteger)analyticsGalleryType;
-(NSUInteger)analyticsMediaType;
-(NSUInteger)analyticsVideoType;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 ;
-(id)mediaEventForClass:(Class)arg0 ;
-(void)calculateVisibleBounds;
-(void)createMediaExposureEventIfNeeded;
-(void)finishMediaExposureEventIfNeeded;
-(void)submitEvents;
-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;
-(void)visibilityStateDidChangeFromState:(NSInteger)arg0 ;
-(void)willSubmitMediaExposureEvent:(id)arg0 ;


@end


#endif