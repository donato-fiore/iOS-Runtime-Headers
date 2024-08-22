// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLREMOTEVIEW_H
#define SLREMOTEVIEW_H

@class UIControl, UISSlotStyle, _UISlotView;
@protocol SLDServiceProxyDelegate, UISSlotAnyContent, OS_dispatch_queue;


#import "SLDServiceProxy.h"

@interface SLRemoteView : UIControl <SLDServiceProxyDelegate>



@property (retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle; // ivar: _lastRenderedSlotStyle
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) NSObject<UISSlotAnyContent> *placeholderSlotContent; // ivar: _placeholderSlotContent
@property (nonatomic) BOOL remoteContentIsLoaded; // ivar: _remoteContentIsLoaded
@property (nonatomic) BOOL remoteRenderingEnabled; // ivar: _remoteRenderingEnabled
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteRenderingQueue; // ivar: _remoteRenderingQueue
@property (readonly, nonatomic) SLDServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly, nonatomic) _UISlotView *slotView; // ivar: _slotView


-(BOOL)shouldInvalidatePreviousPlaceHolderSlotContent:(id)arg0 forStyle:(id)arg1 ;
-(id)_contentProviderForCurrentConfiguration:(SEL)arg0 ;
-(id)_finalSlotStyleForStyle:(id)arg0 ;
-(id)initWithServiceProxyClass:(Class)arg0 maxWidth:(CGFloat)arg1 ;
-(id)makePlaceholderSlotContentForStyle:(id)arg0 ;
-(void)renderRemoteContentForLayerContextID:(NSUInteger)arg0 style:(id)arg1 yield:(id)arg2 ;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;


@end


#endif