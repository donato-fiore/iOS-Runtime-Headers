// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSCROLLVIEWDELEGATEFORWARDER_H
#define WKSCROLLVIEWDELEGATEFORWARDER_H

@class NSString;
@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>

#import "WKWebView.h"

@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate>

 {
    WKWebView *_internalDelegate;
    WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithInternalDelegate:(id)arg0 externalDelegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif