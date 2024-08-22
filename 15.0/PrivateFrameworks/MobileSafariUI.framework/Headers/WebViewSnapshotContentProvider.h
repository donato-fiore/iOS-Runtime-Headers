// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBVIEWSNAPSHOTCONTENTPROVIDER_H
#define WEBVIEWSNAPSHOTCONTENTPROVIDER_H

@class UIImage, NSString, UIColor, UIView, WKWebView;
@protocol TabSnapshotContentProvider;

#import <Foundation/Foundation.h>


@interface WebViewSnapshotContentProvider : NSObject <TabSnapshotContentProvider>

 {
    UIImage *_snapshotImage;
}


@property (readonly, nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *snapshotBackgroundColor;
@property (readonly, nonatomic) UIImage *snapshotContentImage;
@property (readonly, nonatomic) BOOL snapshotContentShouldUnderlapTopBackdrop;
@property (readonly, nonatomic) UIView *snapshotContentView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithWebView:(id)arg0 contentFrame:(struct CGRect )arg1 ;
-(struct CGRect )snapshotContentRectInBounds:(struct CGRect )arg0 ;
-(void)prepareForSnapshotOfSize:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif