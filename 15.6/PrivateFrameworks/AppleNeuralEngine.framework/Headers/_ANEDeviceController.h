// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ANEDEVICECONTROLLER_H
#define _ANEDEVICECONTROLLER_H


#import <Foundation/Foundation.h>


@interface _ANEDeviceController : NSObject

@property (nonatomic) *ANEDeviceStruct device; // ivar: _device
@property (readonly, nonatomic) BOOL isPrivileged; // ivar: _isPrivileged
@property (nonatomic) NSUInteger programHandle; // ivar: _programHandle
@property (nonatomic) NSInteger usecount; // ivar: _usecount


+(id)controllerWithProgramHandle:(NSUInteger)arg0 ;
+(id)new;
+(id)sharedPrivilegedConnection;
+(void)initialize;
-(id)init;
-(id)initWithProgramHandle:(NSUInteger)arg0 priviledged:(BOOL)arg1 ;
-(void)start;
-(void)stop;


@end


#endif