// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTVOICEMETRICS_H
#define ASSISTANTVOICEMETRICS_H

@class NSString, NSMutableSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AssistantVoiceMetrics : NSObject <NSSecureCoding>



@property BOOL downloadError; // ivar: _downloadError
@property (readonly) NSInteger downloadObservationBeginTimestamp; // ivar: _downloadObservationBeginTimestamp
@property (readonly) NSInteger downloadObservationEndTimestamp; // ivar: _downloadObservationEndTimestamp
@property float downloadObservationProgress; // ivar: _downloadObservationProgress
@property BOOL isCellularAllowed; // ivar: _isCellularAllowed
@property (readonly) NSString *lastVoicePreviewedKey; // ivar: _lastVoicePreviewedKey
@property (retain) NSMutableSet *mutableUniqueVoicesPreviewed; // ivar: _mutableUniqueVoicesPreviewed
@property BOOL previewedSuccessfully; // ivar: _previewedSuccessfully
@property (nonatomic) BOOL sentOnce; // ivar: _sentOnce
@property (readonly) NSUInteger uniqueVoicesPreviewed;
@property (readonly) NSString *voiceDownloadKey; // ivar: _voiceDownloadKey
@property (readonly) NSUInteger voicesPreviewed; // ivar: _voicesPreviewed


+(BOOL)supportsSecureCoding;
+(id)keyForLanguage:(id)arg0 gender:(NSInteger)arg1 ;
+(id)keyForLanguage:(id)arg0 name:(id)arg1 ;
-(CGFloat)_clockFactor;
-(CGFloat)downloadObservationDuration;
-(id)description;
-(id)dictionaryMetrics;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)beginDownloadObservation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endDownloadObservation;
-(void)sendAnalyticsEvent;
-(void)setVoiceDownloadForLanguageCode:(id)arg0 gender:(NSInteger)arg1 ;
-(void)setVoiceDownloadForLanguageCode:(id)arg0 name:(id)arg1 ;
-(void)setVoicePreviewedForLanguageCode:(id)arg0 gender:(NSInteger)arg1 ;
-(void)setVoicePreviewedForLanguageCode:(id)arg0 name:(id)arg1 ;


@end


#endif