// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HSFIGCAPTURESYNCSTREAMSGROUP_H
#define HSFIGCAPTURESYNCSTREAMSGROUP_H



#import "HSCMBaseObject.h"
#import "HSFigCaptureDevice.h"

@interface HSFigCaptureSyncStreamsGroup : HSCMBaseObject

@property (readonly, nonatomic) HSFigCaptureDevice *device; // ivar: _device
@property (readonly, nonatomic) *OpaqueFigCaptureSynchronizedStreamsGroup underlyingSyncStreamsGroup; // ivar: _underlyingSyncStreamsGroup


+(id)statusDescription:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStreamsGroup:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(struct __CFString *)arg1 error:(*id)arg2 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCaptureSyncStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup *)arg0 fromDevice:(id)arg1 ;
-(id)streams:(*id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForProperty:(struct __CFString *)arg0 error:(*id)arg1 ;


@end


#endif