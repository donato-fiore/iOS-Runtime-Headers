// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSUPDATETHROTTLE_H
#define _UIFOCUSUPDATETHROTTLE_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface _UIFocusUpdateThrottle : NSObject {
    NSUInteger _nilUpdateCount;
    CGFloat _lastUpdate;
    CGFloat _currentTimeout;
    BOOL _updateIsScheduled;
    NSTimer *_updateTimer;
    id *_updateHandler;
}




-(id)initWithUpdateHandler:(id)arg0 ;
-(void)_performScheduledUpdate;
-(void)didCreateProgrammaticFocusUpdateContext:(id)arg0 ;
-(void)scheduleProgrammaticFocusUpdate;
-(void)teardown;


@end


#endif