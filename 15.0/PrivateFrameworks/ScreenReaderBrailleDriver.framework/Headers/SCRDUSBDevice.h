// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRDUSBDEVICE_H
#define SCRDUSBDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SCRDUSBDevice : NSObject {
    **IOUSBDeviceStruct300 _device;
    **IOUSBInterfaceStruct220 _interface;
    BOOL _isOpen;
    BOOL _isConfigured;
    NSString *_privateRunLoopMode;
    *IONotificationPort _notificationPort;
    unsigned int _notification;
}




-(BOOL)clearPipe:(unsigned char)arg0 bothEnds:(BOOL)arg1 ;
-(BOOL)close;
-(BOOL)getInformationForPipe:(unsigned char)arg0 direction:(char *)arg1 number:(char *)arg2 transferType:(char *)arg3 maxPacketSize:(*unsigned short)arg4 interval:(char *)arg5 ;
-(BOOL)isConfigured;
-(BOOL)isOpen;
-(BOOL)open;
-(BOOL)openWithSeize:(BOOL)arg0 ;
-(BOOL)readData:(*void)arg0 withSize:(*NSUInteger)arg1 fromPipe:(unsigned char)arg2 ;
-(BOOL)reset;
-(BOOL)sendControlRequest:(unsigned char)arg0 type:(unsigned char)arg1 value:(unsigned short)arg2 index:(unsigned short)arg3 data:(*void)arg4 size:(unsigned short)arg5 sizeTransferred:(*NSUInteger)arg6 pipe:(unsigned char)arg7 timeout:(CGFloat)arg8 ;
-(BOOL)setAlternateInterface:(unsigned char)arg0 ;
-(BOOL)setConfiguration:(unsigned char)arg0 ;
-(BOOL)setInterface:(unsigned char)arg0 ;
-(BOOL)writeData:(*void)arg0 withSize:(NSUInteger)arg1 toBulkPipe:(unsigned char)arg2 withNoDataTimeout:(unsigned int)arg3 andCompletionTimeOut:(unsigned int)arg4 ;
-(NSUInteger)_transferData:(*void)arg0 withSize:(NSUInteger)arg1 toPipe:(unsigned char)arg2 withTimeout:(CGFloat)arg3 withFunction:(*unk)arg4 ;
-(NSUInteger)readData:(*void)arg0 withSize:(NSUInteger)arg1 fromBulkPipe:(unsigned char)arg2 withNoDataTimeout:(unsigned int)arg3 andCompletionTimeOut:(unsigned int)arg4 ;
-(NSUInteger)readData:(*void)arg0 withSize:(NSUInteger)arg1 fromPipe:(unsigned char)arg2 withTimeout:(CGFloat)arg3 ;
-(NSUInteger)writeData:(*void)arg0 withSize:(NSUInteger)arg1 toPipe:(unsigned char)arg2 withTimeout:(CGFloat)arg3 ;
-(id)initWithIOObject:(unsigned int)arg0 ;
-(int)product;
-(int)vendor;
-(unsigned char)numberOfConfigurations;
-(void)abortPipe:(unsigned char)arg0 ;
-(void)dealloc;
-(void)registerForDisconnectNotifications:(BOOL)arg0 ;


@end


#endif