// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKMODELVIEW_H
#define WKMODELVIEW_H

@class NSString, ASVInlinePreview;
@protocol WKNativelyInteractible;


#import "WKCompositingView.h"

@interface WKModelView : WKCompositingView <WKNativelyInteractible>

 {
    RetainPtr<ASVInlinePreview> _preview;
    RetainPtr<WKModelInteractionGestureRecognizer> _modelInteractionGestureRecognizer;
    String _filePath;
    CGRect _lastBounds;
    ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> _layerID;
    WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl> _page;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ASVInlinePreview *preview;
@property (readonly) Class superclass;


-(BOOL)createFileForModel:(*void)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithModel:(*void)arg0 layerID:(struct ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> )arg1 page:(*void)arg2 ;
-(void)createPreview;
-(void)layoutSubviews;
-(void)updateBounds;


@end


#endif