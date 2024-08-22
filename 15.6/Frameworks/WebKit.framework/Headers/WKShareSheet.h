// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSHARESHEET_H
#define WKSHARESHEET_H

@class NSString;
@protocol UIAdaptivePresentationControllerDelegate, WKShareSheetDelegate;

#import <Foundation/Foundation.h>


@interface WKShareSheet : NSObject <UIAdaptivePresentationControllerDelegate>

 {
    RetainPtr<NSURL> _temporaryFileShareDirectory;
    WeakObjCPtr<WKWebView> _webView;
    WeakObjCPtr<id<WKShareSheetDelegate>> _delegate;
    CompletionHandler<void (bool)> _completionHandler;
    RetainPtr<UIActivityViewController> _shareSheetViewController;
    RetainPtr<UIViewController> _presentationViewController;
    BOOL _didShareSuccessfully;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WKShareSheetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createRandomSharingDirectoryForFile:(id)arg0 ;
+(id)createTemporarySharingDirectory;
+(id)writeFileToShareableURL:(id)arg0 data:(id)arg1 temporaryDirectory:(id)arg2 ;
-(id)initWithView:(id)arg0 ;
-(void)dismiss;
-(void)presentWithParameters:(*void)arg0 inRect:(struct optional<WebCore::FloatRect> )arg1 completionHandler:(*void)arg2 ;
-(void)presentWithShareDataArray:(id)arg0 inRect:(struct optional<WebCore::FloatRect> )arg1 ;


@end


#endif