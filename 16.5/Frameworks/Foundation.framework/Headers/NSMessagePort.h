// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMESSAGEPORT_H
#define NSMESSAGEPORT_H

@class NSPort;



@interface NSMessagePort : NSPort {
    *void _port;
    id *_delegate;
}




+(BOOL)sendBeforeTime:(CGFloat)arg0 streamData:(id)arg1 components:(id)arg2 to:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5 reserved:(NSUInteger)arg6 ;
+(void)_fixNSMessagePortLeak;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isValid;
-(BOOL)sendBeforeDate:(id)arg0 components:(id)arg1 from:(id)arg2 reserved:(NSUInteger)arg3 ;
-(BOOL)sendBeforeDate:(id)arg0 msgid:(NSUInteger)arg1 components:(id)arg2 from:(id)arg3 reserved:(NSUInteger)arg4 ;
-(BOOL)sendBeforeTime:(CGFloat)arg0 streamData:(*void)arg1 components:(id)arg2 from:(id)arg3 msgid:(unsigned int)arg4 ;
-(BOOL)setName:(id)arg0 ;
-(NSUInteger)retainCount;
-(id)delegate;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithRemoteName:(id)arg0 ;
-(id)name;
-(id)retain;
-(void)dealloc;
-(void)invalidate;
-(void)release;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif