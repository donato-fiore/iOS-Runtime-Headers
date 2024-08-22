// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRLOGBUFFER_H
#define MRLOGBUFFER_H

@class NSArray, NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface MRLogBuffer : NSObject

@property (readonly, nonatomic) NSInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) NSObject<OS_os_log> *category; // ivar: _category
@property (retain, nonatomic) NSArray *history; // ivar: _history
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSString *prefix; // ivar: _prefix


+(id)bufferWithCapacity:(NSInteger)arg0 category:(id)arg1 loggingPrefix:(id)arg2 ;
-(id)description;
-(id)initWithCapacity:(NSInteger)arg0 category:(id)arg1 prefix:(id)arg2 ;
-(void)log:(id)arg0 ;
-(void)log:(id)arg0 withType:(unsigned char)arg1 capture:(BOOL)arg2 ;
-(void)logDebug:(id)arg0 ;
-(void)logDebugWithoutCapture:(id)arg0 ;
-(void)logError:(id)arg0 ;
-(void)logErrorWithoutCapture:(id)arg0 ;
-(void)logFault:(id)arg0 ;
-(void)logFaultWithoutCapture:(id)arg0 ;
-(void)logInfo:(id)arg0 ;
-(void)logInfoWithoutCapture:(id)arg0 ;
-(void)logWithoutCapture:(id)arg0 ;


@end


#endif