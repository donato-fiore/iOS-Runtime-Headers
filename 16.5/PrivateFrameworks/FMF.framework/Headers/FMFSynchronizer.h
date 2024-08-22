// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFSYNCHRONIZER_H
#define FMFSYNCHRONIZER_H

@class NSString;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface FMFSynchronizer : NSObject

@property (retain, nonatomic) NSString *info; // ivar: _info
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // ivar: _sem
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (nonatomic) BOOL timeoutOccurred; // ivar: _timeoutOccurred


-(id)initWithDescription:(id)arg0 andTimeout:(CGFloat)arg1 ;
-(id)loggingID;
-(void)signal;
-(void)wait;


@end


#endif