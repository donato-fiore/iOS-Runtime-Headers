// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVOUTPUTCONTEXTDESTINATIONCHANGE_H
#define AVOUTPUTCONTEXTDESTINATIONCHANGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVOutputContextDestinationChangeInternal.h"

@interface AVOutputContextDestinationChange : NSObject {
    AVOutputContextDestinationChangeInternal *_ivars;
}


@property (readonly) NSString *cancellationReason;
@property (readonly) NSInteger status;


-(id)description;
-(id)init;
-(void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(struct __CFString *)arg0 ;
-(void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(struct __CFString *)arg0 ;
-(void)dealloc;
-(void)markAsCancelledWithReason:(id)arg0 ;
-(void)markAsFailed;
-(void)markAsFinished;
-(void)markAsInProgress;


@end


#endif