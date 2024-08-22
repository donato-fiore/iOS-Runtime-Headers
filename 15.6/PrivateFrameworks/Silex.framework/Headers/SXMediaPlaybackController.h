// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXMEDIAPLAYBACKCONTROLLER_H
#define SXMEDIAPLAYBACKCONTROLLER_H

@class NSString;
@protocol SXViewportChangeListener, SXMediaPlaybackDelegate;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener>

 {
    id<SXMediaPlaybackDelegate> *_mediaPlaybackDelegate;
    SXViewport *_viewport;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;


@end


#endif