// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBANALYTICSNIGHTSHIFTTRACKER_H
#define CBANALYTICSNIGHTSHIFTTRACKER_H


#import <Foundation/Foundation.h>


@interface CBAnalyticsNightShiftTracker : NSObject {
    CGFloat _modeChangeTimestamp;
    BOOL _isEnabled;
}




-(BOOL)isStarted;
-(id)init;
-(void)start:(BOOL)arg0 ;
-(void)stop:(int)arg0 isEnabled:(BOOL)arg1 ;
-(void)update:(int)arg0 isEnabled:(BOOL)arg1 ;


@end


#endif