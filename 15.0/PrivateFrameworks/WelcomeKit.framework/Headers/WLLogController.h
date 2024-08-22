// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLLOGCONTROLLER_H
#define WLLOGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface WLLogController : NSObject {
    BOOL _loggingEnabled;
}




+(id)sharedLogger;
-(BOOL)_loggingEnabled;
-(id)init;
-(void)_reloadLogPreferences;
-(void)logMessageFromAddress:(*void)arg0 withLevel:(NSUInteger)arg1 format:(id)arg2 args:(char *)arg3 ;


@end


#endif