// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFEEDBACKHAPTICFILEPATTERN_H
#define _UIFEEDBACKHAPTICFILEPATTERN_H

@class UIFeedback, NSString, NSURL;
@protocol _UIFeedbackFilePlayable_Internal, _UIFeedbackDiscretePlayable;



@interface _UIFeedbackHapticFilePattern : UIFeedback <_UIFeedbackFilePlayable_Internal, _UIFeedbackDiscretePlayable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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