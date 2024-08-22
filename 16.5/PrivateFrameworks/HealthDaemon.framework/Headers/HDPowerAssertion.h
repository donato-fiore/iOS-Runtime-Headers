// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDPOWERASSERTION_H
#define HDPOWERASSERTION_H

@class NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface HDPowerAssertion : NSObject {
    unsigned int _assertionID;
    NSObject<OS_dispatch_source> *_timer;
    id *_timeoutHandler;
    uint8_t _invalidated;
}


@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL invalidated;
@property (readonly) CGFloat timeout; // ivar: _timeout


+(id)powerAssertionWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 timeoutHandler:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif