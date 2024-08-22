// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HSFIGCAPTURESTREAM_H
#define HSFIGCAPTURESTREAM_H



#import "HSCMBaseObject.h"
#import "HSFigCaptureDevice.h"

@interface HSFigCaptureStream : HSCMBaseObject

@property (readonly, nonatomic) HSFigCaptureDevice *device; // ivar: _device
@property (readonly, nonatomic) *OpaqueFigCaptureStream underlyingStream; // ivar: _underlyingStream


+(id)statusDescription:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStream:(id)arg0 ;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCaptureStream:(struct OpaqueFigCaptureStream *)arg0 fromDevice:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;


@end


#endif