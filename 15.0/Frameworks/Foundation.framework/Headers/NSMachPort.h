// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSMACHPORT_H
#define NSMACHPORT_H



#import "NSPort.h"

@interface NSMachPort : NSPort {
    id *_delegate;
    NSUInteger _flags;
    unsigned int _machPort;
    NSUInteger _reserved;
}


@property (readonly) unsigned int machPort;


+(BOOL)sendBeforeTime:(CGFloat)arg0 streamData:(id)arg1 components:(id)arg2 to:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5 reserved:(NSUInteger)arg6 ;
+(id)port;
+(id)portWithMachPort:(unsigned int)arg0 ;
+(id)portWithMachPort:(unsigned int)arg0 options:(NSUInteger)arg1 ;
+(void)_fixNSMachPortLeak;
+(void)resetAllPorts;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)isMemberOfClass:(Class)arg0 ;
-(BOOL)isValid;
-(BOOL)sendBeforeDate:(id)arg0 components:(id)arg1 from:(id)arg2 reserved:(NSUInteger)arg3 ;
-(BOOL)sendBeforeDate:(id)arg0 msgid:(NSUInteger)arg1 components:(id)arg2 from:(id)arg3 reserved:(NSUInteger)arg4 ;
-(BOOL)sendBeforeTime:(CGFloat)arg0 streamData:(*void)arg1 components:(id)arg2 from:(id)arg3 msgid:(unsigned int)arg4 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)delegate;
-(id)init;
-(id)initWithMachPort:(unsigned int)arg0 ;
-(id)initWithMachPort:(unsigned int)arg0 options:(NSUInteger)arg1 ;
-(id)retain;
-(void)invalidate;
-(void)release;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif