// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIANALYTICSTOUCHESSESSION_H
#define _UIANALYTICSTOUCHESSESSION_H


#import <Foundation/Foundation.h>


@interface _UIAnalyticsTouchesSession : NSObject {
    BOOL _touchesDetected;
    BOOL _multitouchDetected;
    BOOL _allowedGestureRecognizerHasBegun;
    NSUInteger _touchesStartTime;
}


@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(id)init;
-(void)processEvent:(id)arg0 ;


@end


#endif