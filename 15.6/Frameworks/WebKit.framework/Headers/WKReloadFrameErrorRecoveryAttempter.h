// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKRELOADFRAMEERRORRECOVERYATTEMPTER_H
#define WKRELOADFRAMEERRORRECOVERYATTEMPTER_H

@class NSString;
@protocol _WKErrorRecoveryAttempting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WKReloadFrameErrorRecoveryAttempter : NSObject <_WKErrorRecoveryAttempting, NSSecureCoding>

 {
    WeakObjCPtr<WKWebView> _webView;
    RetainPtr<_WKFrameHandle> _frameHandle;
    String _urlString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)attemptRecovery;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWebView:(id)arg0 frameHandle:(id)arg1 urlString:(*void)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif