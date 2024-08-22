// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRILONGPRESSBUTTONSOURCE_H
#define SIRILONGPRESSBUTTONSOURCE_H

@class NSString, NSMutableArray;
@protocol SiriButtonSource;


#import "SiriActivationSource.h"
#import "SiriLongPressButtonContext.h"

@interface SiriLongPressButtonSource : SiriActivationSource <SiriButtonSource>



@property (nonatomic) NSInteger buttonIdentifier; // ivar: _buttonIdentifier
@property (retain, nonatomic) SiriLongPressButtonContext *context; // ivar: _context
@property (copy, nonatomic) id *currentTimeGenerator; // ivar: _currentTimeGenerator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *lock_activityAssertions; // ivar: _lock_activityAssertions
@property (nonatomic) CGFloat longPressInterval; // ivar: _longPressInterval
@property (readonly) Class superclass;


+(id)longPressButtonForIdentifier:(NSInteger)arg0 ;
+(id)new;
-(BOOL)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;
-(CGFloat)_timestampForSpeechInteractionActivityWithTimestamp:(CGFloat)arg0 ;
-(id)_deviceIdentifier;
-(id)_initWithButtonIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)prepareForActivation;
-(id)prepareForActivationWithTimestamp:(CGFloat)arg0 ;
-(id)speechInteractionActivityWithTimestamp:(CGFloat)arg0 ;
-(void)configureConnection;
-(void)didRecognizeButtonSinglePressUp;
-(void)didRecognizeLongPress;


@end


#endif