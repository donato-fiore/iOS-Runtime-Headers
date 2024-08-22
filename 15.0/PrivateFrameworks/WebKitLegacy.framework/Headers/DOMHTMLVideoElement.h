// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMHTMLVIDEOELEMENT_H
#define DOMHTMLVIDEOELEMENT_H

@class NSString;


#import "DOMHTMLMediaElement.h"

@interface DOMHTMLVideoElement : DOMHTMLMediaElement

@property unsigned int height;
@property BOOL playsInline;
@property (copy) NSString *poster;
@property (readonly) unsigned int videoHeight;
@property (readonly) unsigned int videoWidth;
@property (readonly) BOOL webkitDisplayingFullscreen;
@property (readonly) BOOL webkitSupportsFullscreen;
@property unsigned int width;


-(void)webkitEnterFullScreen;
-(void)webkitEnterFullscreen;
-(void)webkitExitFullScreen;
-(void)webkitExitFullscreen;


@end


#endif