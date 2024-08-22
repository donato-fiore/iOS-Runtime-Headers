// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPORT_H
#define NSPORT_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface NSPort : NSObject <NSCopying, NSCoding>



@property (readonly) NSUInteger reservedSpaceLength;
@property (readonly, getter=isValid) BOOL valid;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)port;
+(id)portWithMachPort:(unsigned int)arg0 ;
-(BOOL)sendBeforeDate:(id)arg0 components:(id)arg1 from:(id)arg2 reserved:(NSUInteger)arg3 ;
-(BOOL)sendBeforeDate:(id)arg0 msgid:(NSUInteger)arg1 components:(id)arg2 from:(id)arg3 reserved:(NSUInteger)arg4 ;
-(Class)classForCoder;
-(Class)classForPortCoder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)delegate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMachPort:(unsigned int)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(unsigned int)machPort;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif