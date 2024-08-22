// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBKITFULLSCREENLISTENER_H
#define WEBKITFULLSCREENLISTENER_H

@class NSString;
@protocol WebKitFullScreenListener;

#import <Foundation/Foundation.h>


@interface WebKitFullScreenListener : NSObject <WebKitFullScreenListener>

 {
    RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> _element;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithElement:(*void)arg0 ;
-(void)webkitDidEnterFullScreen;
-(void)webkitDidExitFullScreen;
-(void)webkitWillEnterFullScreen;
-(void)webkitWillExitFullScreen;


@end


#endif