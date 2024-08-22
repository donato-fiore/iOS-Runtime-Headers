// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIOSTREAMREQUEST_H
#define CSAUDIOSTREAMREQUEST_H

@class CSAudioRecordContext;
@protocol NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSAudioStreamRequest : NSObject <NSCopying>



@property (nonatomic) NSInteger audioFormat; // ivar: _audioFormat
@property (nonatomic) unsigned int encoderBitRate; // ivar: _encoderBitRate
@property (nonatomic) BOOL isSiri; // ivar: _isSiri
@property (nonatomic) unsigned int lpcmBitDepth; // ivar: _lpcmBitDepth
@property (nonatomic) BOOL lpcmIsFloat; // ivar: _lpcmIsFloat
@property (nonatomic) unsigned int numberOfChannels; // ivar: _numberOfChannels
@property (retain, nonatomic) CSAudioRecordContext *recordContext; // ivar: _recordContext
@property (nonatomic) BOOL requiresHistoricalBuffer; // ivar: _requiresHistoricalBuffer
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (nonatomic) BOOL useCustomizedRecordSettings; // ivar: _useCustomizedRecordSettings
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


+(id)defaultRequestWithContext:(id)arg0 ;
+(id)requestForLpcmRecordSettingsWithContext:(id)arg0 ;
+(id)requestForOpusRecordSettingsWithContext:(id)arg0 ;
+(id)requestForSpeexRecordSettingsWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initTandemWithRequest:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 ;


@end


#endif