// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REAUDIOPAYLOAD_H
#define REAUDIOPAYLOAD_H

@class NSString, AVAudioFormat, NSNumber;
@protocol OS_xpc_object;


#import "RESharedResourcePayload.h"

@interface REAudioPayload : RESharedResourcePayload

@property (readonly, nonatomic) NSObject<OS_xpc_object> *buffer; // ivar: _buffer
@property (readonly, nonatomic) CGFloat calibrationLevel; // ivar: _calibrationLevel
@property (readonly, nonatomic) int calibrationMode; // ivar: _calibrationMode
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) unsigned char inputMode; // ivar: _inputMode
@property (readonly, nonatomic) NSNumber *length; // ivar: _length
@property (readonly, nonatomic) int loopCount; // ivar: _loopCount
@property (readonly, nonatomic) NSUInteger mixGroupID; // ivar: _mixGroupID
@property (readonly, nonatomic) NSString *mixGroupName; // ivar: _mixGroupName
@property (readonly, nonatomic) int normalizationMode; // ivar: _normalizationMode
@property (readonly, nonatomic) float referenceLevel; // ivar: _referenceLevel
@property (readonly, nonatomic) BOOL streaming; // ivar: _streaming


+(BOOL)supportsSecureCoding;
-(id)initWithBuffer:(id)arg0 format:(id)arg1 length:(unsigned int)arg2 inputMode:(unsigned char)arg3 referenceLevel:(float)arg4 loopCount:(int)arg5 mixGroupID:(NSUInteger)arg6 mixGroupName:(id)arg7 streaming:(BOOL)arg8 normalizationMode:(int)arg9 calibrationMode:(int)arg10 calibrationLevel:(CGFloat)arg11 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 inputMode:(unsigned char)arg1 referenceLevel:(float)arg2 loopCount:(int)arg3 mixGroupID:(NSUInteger)arg4 mixGroupName:(id)arg5 streaming:(BOOL)arg6 normalizationMode:(int)arg7 calibrationMode:(int)arg8 calibrationLevel:(CGFloat)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif