// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSNTTR_H
#define MSNTTR_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface MSNTTR : NSObject {
    *__CFRunLoopSource _runLoopSource;
    *__CFUserNotification _userNotification;
}


@property (readonly) BOOL TTRInProgress;
@property BOOL pendedTTR; // ivar: _pendedTTR
@property (retain) NSURL *url; // ivar: _url


+(id)sharedInstance;
-(void)beginTTRWithTitle:(id)arg0 ;
-(void)beginTTRWithTitle:(id)arg0 date:(id)arg1 ;
-(void)completeTTR:(id)arg0 ;
-(void)continueTTR;
-(void)handleCallback:(NSUInteger)arg0 ;


@end


#endif