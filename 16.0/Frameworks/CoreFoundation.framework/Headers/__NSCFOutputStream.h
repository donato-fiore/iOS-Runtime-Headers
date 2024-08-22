// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFOUTPUTSTREAM_H
#define __NSCFOUTPUTSTREAM_H



#import "NSOutputStream.h"

@interface __NSCFOutputStream : NSOutputStream



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_setCFClientFlags:(NSUInteger)arg0 callback:(*unk)arg1 context:(struct ? *)arg2 ;
-(BOOL)_tryRetain;
-(BOOL)hasSpaceAvailable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)initToBuffer:(char *)arg0 capacity:(NSUInteger)arg1 ;
-(id)initToFileAtPath:(id)arg0 append:(BOOL)arg1 ;
-(id)initToMemory;
-(id)initWithURL:(id)arg0 append:(BOOL)arg1 ;
-(id)propertyForKey:(id)arg0 ;
-(id)retain;
-(id)streamError;
-(void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1 ;
-(void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1 ;
-(void)close;
-(void)open;
-(void)release;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif