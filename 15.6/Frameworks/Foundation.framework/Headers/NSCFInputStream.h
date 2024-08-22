// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCFINPUTSTREAM_H
#define NSCFINPUTSTREAM_H

@class NSInputStream;



@interface NSCFInputStream : NSInputStream



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_setCFClientFlags:(NSUInteger)arg0 callback:(*unk)arg1 context:(struct ? *)arg2 ;
-(BOOL)allowsWeakReference;
-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)retainWeakReference;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)initWithData:(id)arg0 ;
-(id)initWithFileAtPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
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