// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRILONGPRESSBUTTONSOURCE_H
#define SIRILONGPRESSBUTTONSOURCE_H

@class NSString, NSMutableArray;
@protocol SiriLongPressButtonConfigurationUpdateDelegate, SiriButtonSource, SiriLongPressButtonSourceDelegate;


#import "SiriActivationSource.h"
#import "SiriLongPressButtonConfiguration.h"
#import "SiriLongPressButtonContext.h"
#import "SiriLongPressButtonConfigurationUpdateManager.h"

@interface SiriLongPressButtonSource : SiriActivationSource <SiriLongPressButtonConfigurationUpdateDelegate, SiriButtonSource>



@property (nonatomic) NSInteger buttonIdentifier; // ivar: _buttonIdentifier
@property (copy, nonatomic) SiriLongPressButtonConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) SiriLongPressButtonContext *context; // ivar: _context
@property (copy, nonatomic) id *currentTimeGenerator; // ivar: _currentTimeGenerator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriLongPressButtonSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *lock_activityAssertions; // ivar: _lock_activityAssertions
@property (readonly) Class superclass;
@property (retain, nonatomic) SiriLongPressButtonConfigurationUpdateManager *updateManager; // ivar: _updateManager


+(id)longPressButtonForIdentifier:(NSInteger)arg0 ;
+(id)new;
-(BOOL)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;
-(BOOL)_sourceSupportsAutomaticConfigurationUpdates;
-(CGFloat)_timestampForSpeechInteractionActivityWithTimestamp:(CGFloat)arg0 ;
-(CGFloat)longPressInterval;
-(NSInteger)longPressBehavior;
-(id)_deviceIdentifier;
-(id)_initWithButtonIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)prepareForActivation;
-(id)prepareForActivationWithTimestamp:(CGFloat)arg0 ;
-(id)speechInteractionActivityWithTimestamp:(CGFloat)arg0 ;
-(void)configurationUpdateManager:(id)arg0 configurationDidUpdateForLongPressSource:(id)arg1 ;
-(void)configureConnection;
-(void)didRecognizeButtonSinglePressUp;
-(void)didRecognizeLongPress;
-(void)requestConfigurationUpdatesBasedOnDeviceSettings;
-(void)stopConfigurationUpdates;


@end


#endif