// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETMEDIAVIEW_H
#define OKWIDGETMEDIAVIEW_H

@class UIActivityIndicatorView;


#import "OKWidgetMediaViewProxy.h"

@interface OKWidgetMediaView : OKWidgetMediaViewProxy {
    UIActivityIndicatorView *_videoActivityIndicator;
}




-(id)videoActivityIndicator;
-(void)dealloc;
-(void)showVideoActivityIndicator:(BOOL)arg0 ;


@end


#endif