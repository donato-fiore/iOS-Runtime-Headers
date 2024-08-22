// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBDISPLAYLINKHANDLER_H
#define WEBDISPLAYLINKHANDLER_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface WebDisplayLinkHandler : NSObject {
    *void m_monitor;
    CADisplayLink *m_displayLink;
}




-(id)initWithMonitor:(*void)arg0 ;
-(void)dealloc;
-(void)handleDisplayLink:(id)arg0 ;
-(void)invalidate;
-(void)setPaused:(BOOL)arg0 ;


@end


#endif