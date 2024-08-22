// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRFIDESASRRECORD_H
#define CESRFIDESASRRECORD_H

@class NSString, NSMutableArray, NSArray, NSURL, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CESRUserData.h"

@interface CESRFidesASRRecord : NSObject <NSSecureCoding>

 {
    CGFloat _collectedAudioDurationMS;
    BOOL _audioExceededMaxDuration;
}


@property (readonly, copy, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property (copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, copy, nonatomic) NSString *asrSelfComponentIdentifier; // ivar: _asrSelfComponentIdentifier
@property (readonly, copy, nonatomic) NSMutableArray *audioPackets; // ivar: _audioPackets
@property (readonly, copy, nonatomic) NSArray *context; // ivar: _context
@property (copy, nonatomic) NSString *correctedText; // ivar: _correctedText
@property (copy, nonatomic) NSString *date; // ivar: _date
@property (readonly, nonatomic) BOOL farField; // ivar: _farField
@property (readonly, nonatomic) BOOL hasRecognizedAnything; // ivar: _hasRecognizedAnything
@property (readonly, copy, nonatomic) NSString *interactionIdentifier; // ivar: _interactionIdentifier
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (copy, nonatomic) NSURL *originalAudioFileURL; // ivar: _originalAudioFileURL
@property (nonatomic) BOOL personalizedLMUsed; // ivar: _personalizedLMUsed
@property (readonly, copy, nonatomic) NSString *pluginId; // ivar: _pluginId
@property (retain, nonatomic) NSData *profile; // ivar: _profile
@property (copy, nonatomic) NSArray *recognizedText; // ivar: _recognizedText
@property (readonly, nonatomic) NSUInteger samplingRate; // ivar: _samplingRate
@property (readonly, copy, nonatomic) NSString *task; // ivar: _task
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) CESRUserData *userData; // ivar: _userData


+(BOOL)supportsSecureCoding;
+(id)recordFromData:(id)arg0 ;
+(id)recordWithLanguage:(id)arg0 task:(id)arg1 context:(id)arg2 narrowband:(BOOL)arg3 farField:(BOOL)arg4 interactionIdentifier:(id)arg5 asrSelfComponentIdentifier:(id)arg6 pluginId:(id)arg7 ;
+(id)recordWithLanguage:(id)arg0 task:(id)arg1 context:(id)arg2 narrowband:(BOOL)arg3 farField:(BOOL)arg4 interactionIdentifier:(id)arg5 asrSelfComponentIdentifier:(id)arg6 pluginId:(id)arg7 frequency:(NSUInteger)arg8 ;
+(void)deleteAllRecordsForPlugin:(id)arg0 completion:(id)arg1 ;
-(BOOL)hasData;
-(id)_recordData;
-(id)_recordInfo;
-(id)concatenatedAudioPackets;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 task:(id)arg1 context:(id)arg2 narrowband:(BOOL)arg3 farField:(BOOL)arg4 interactionIdentifier:(id)arg5 asrSelfComponentIdentifier:(id)arg6 pluginId:(id)arg7 ;
-(id)todaysDate;
-(void)addAudioPacket:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markRecognition;
-(void)save;
-(void)saveOneRecordPerDay;


@end


#endif