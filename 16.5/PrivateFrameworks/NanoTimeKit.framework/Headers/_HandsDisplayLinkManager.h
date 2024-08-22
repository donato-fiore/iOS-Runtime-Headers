// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HANDSDISPLAYLINKMANAGER_H
#define _HANDSDISPLAYLINKMANAGER_H

@class CADisplayLink, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _HandsDisplayLinkManager : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    NSUInteger _nextToken;
    BOOL _inForeground;
}




+(id)sharedInstance;
-(id)_nextToken;
-(id)init;
-(id)startUpdatesWithHandler:(id)arg0 ;
-(void)_backgrounded;
-(void)_foregrounded;
-(void)_invokeHandlers;
-(void)_onDisplayLink:(id)arg0 ;
-(void)_updateDisplayLink;
-(void)dealloc;
-(void)stopUpdatesForToken:(id)arg0 ;


@end


#endif