// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLSHAREDTEXTUREHANDLE_H
#define MTLSHAREDTEXTUREHANDLE_H

@class NSString;
@protocol NSSecureCoding, MTLDevice;

#import <Foundation/Foundation.h>


@interface MTLSharedTextureHandle : NSObject <NSSecureCoding>

 {
    *MTLSharedTextureHandlePrivate _priv;
}


@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSString *label;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 label:(id)arg1 ;
-(id)initWithMachPort:(unsigned int)arg0 ;
-(struct __IOSurface *)ioSurface;
-(unsigned int)createMachPort;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif