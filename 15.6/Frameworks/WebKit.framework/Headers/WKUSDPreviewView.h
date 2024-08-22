// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKUSDPREVIEWVIEW_H
#define WKUSDPREVIEWVIEW_H

@class NSString, UIView, NSData;
@protocol ASVThumbnailViewDelegate, WKWebViewContentProvider, QLPreviewItemDataProvider;


#import "WKApplicationStateTrackingView.h"
#import "WKWebView.h"

@interface WKUSDPreviewView : WKApplicationStateTrackingView <ASVThumbnailViewDelegate, WKWebViewContentProvider, QLPreviewItemDataProvider>

 {
    RetainPtr<NSItemProvider> _itemProvider;
    RetainPtr<NSData> _data;
    RetainPtr<NSString> _suggestedFilename;
    RetainPtr<NSString> _mimeType;
    RetainPtr<QLItem> _item;
    RetainPtr<ASVThumbnailView> _thumbnailView;
    WKWebView *_webView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *web_contentView;
@property (readonly, nonatomic) NSData *web_dataRepresentation;
@property (readonly, nonatomic) BOOL web_isBackground;
@property (readonly, nonatomic) NSString *web_suggestedFilename;


+(BOOL)web_requiresCustomSnapshotting;
-(id)provideDataForItem:(id)arg0 ;
-(id)web_initWithFrame:(struct CGRect )arg0 webView:(id)arg1 mimeType:(id)arg2 ;
-(void)_layoutThumbnailView;
-(void)thumbnailView:(id)arg0 wantsToPresentPreviewController:(id)arg1 forItem:(id)arg2 ;
-(void)web_computedContentInsetDidChange;
-(void)web_countStringMatches:(id)arg0 options:(NSUInteger)arg1 maxCount:(NSUInteger)arg2 ;
-(void)web_didSameDocumentNavigation:(unsigned int)arg0 ;
-(void)web_findString:(id)arg0 options:(NSUInteger)arg1 maxCount:(NSUInteger)arg2 ;
-(void)web_hideFindUI;
-(void)web_setContentProviderData:(id)arg0 suggestedFilename:(id)arg1 ;
-(void)web_setFixedOverlayView:(id)arg0 ;
-(void)web_setMinimumSize:(struct CGSize )arg0 ;
-(void)web_setOverlaidAccessoryViewsInset:(struct CGSize )arg0 ;


@end


#endif