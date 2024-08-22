// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSFIGCAPTUREDEVICE_H
#define HSFIGCAPTUREDEVICE_H



#import "HSCMBaseObject.h"

@interface HSFigCaptureDevice : HSCMBaseObject

@property (readonly, nonatomic) *OpaqueFigCaptureDevice underlyingDevice; // ivar: _underlyingDevice


+(id)statusDescription:(int)arg0 ;
-(BOOL)invalidate:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(BOOL)relinquishControlOfStreams:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestControlOfStreams:(id)arg0 error:(*id)arg1 ;
-(BOOL)setValue:(id)arg0 forProperty:(struct __CFString *)arg1 error:(*id)arg2 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCaptureDevice:(struct OpaqueFigCaptureDevice *)arg0 ;
-(id)streams:(*id)arg0 ;
-(id)synchronizedStreamsGroups:(*id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForProperty:(struct __CFString *)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif