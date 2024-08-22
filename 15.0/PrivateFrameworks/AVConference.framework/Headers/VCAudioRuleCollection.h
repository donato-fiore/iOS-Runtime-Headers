// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCAUDIORULECOLLECTION_H
#define VCAUDIORULECOLLECTION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCAudioRuleCollection : NSObject <NSCopying>

 {
    int _deviceRole;
}


@property (nonatomic) int aacBlockSize; // ivar: _aacBlockSize
@property (nonatomic) BOOL allowAudioRecording; // ivar: _allowAudioRecording
@property (nonatomic) BOOL allowAudioSwitching; // ivar: _allowAudioSwitching
@property (readonly, nonatomic) NSArray *rules; // ivar: _rules
@property (readonly, nonatomic) NSArray *secondaryPayloads; // ivar: _secondaryPayloads


+(int)getForcedPayload;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPayloadSupported:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initPrimaryPayload:(int)arg0 dtxPayload:(int)arg1 redPayload:(int)arg2 secondaryPayloads:(id)arg3 allowAudioSwitching:(BOOL)arg4 sbr:(BOOL)arg5 aacBlockSize:(int)arg6 ;
-(id)initWithPhoneContinuity:(BOOL)arg0 allowAudioSwitching:(BOOL)arg1 sbr:(BOOL)arg2 aacBlockSize:(int)arg3 ;
-(id)initWithPhoneContinuity:(BOOL)arg0 allowAudioSwitching:(BOOL)arg1 sbr:(BOOL)arg2 aacBlockSize:(int)arg3 isLowLatencyAudio:(BOOL)arg4 ;
-(void)addAudioPayload:(int)arg0 isSecondary:(BOOL)arg1 sbr:(BOOL)arg2 ;
-(void)addAudioRule:(id)arg0 ;
-(void)addAudioRules:(id)arg0 ;
-(void)clearAudioRules;
-(void)dealloc;
-(void)setupAudioRulesWithSBR:(BOOL)arg0 isContinuity:(BOOL)arg1 ;


@end


#endif