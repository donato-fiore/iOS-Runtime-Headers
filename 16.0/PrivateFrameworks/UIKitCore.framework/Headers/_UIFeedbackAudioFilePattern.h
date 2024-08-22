// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFEEDBACKAUDIOFILEPATTERN_H
#define _UIFEEDBACKAUDIOFILEPATTERN_H

@class UIFeedback, NSString, NSURL;
@protocol _UIFeedbackFilePlayable_Internal, _UIFeedbackCoreHapticsPlayerReuse_Internal, _UIFeedbackCoreHapticsCustomAudio_Internal, _UIFeedbackDiscretePlayable;



@interface _UIFeedbackAudioFilePattern : UIFeedback <_UIFeedbackFilePlayable_Internal, _UIFeedbackCoreHapticsPlayerReuse_Internal, _UIFeedbackCoreHapticsCustomAudio_Internal, _UIFeedbackDiscretePlayable>



@property (nonatomic) BOOL canReuseCoreHapticsPlayer; // ivar: _canReuseCoreHapticsPlayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableEventUseVolumeEnvelope; // ivar: _disableEventUseVolumeEnvelope
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority; // ivar: _highPriority
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)feedbackPatternFromFile:(id)arg0 ;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_effectivePlayableFeedbackTypes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;


@end


#endif