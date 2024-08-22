// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSSWITCHCONTROLSETTINGS_H
#define AXSSSWITCHCONTROLSETTINGS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AXSSSwitchControlSettings : NSObject

@property (nonatomic) CGFloat autoHideTimeout; // ivar: _autoHideTimeout
@property (nonatomic) CGFloat autoScanningInterval; // ivar: _autoScanningInterval
@property (nonatomic) CGFloat autoTapTimeout; // ivar: _autoTapTimeout
@property (copy, nonatomic) NSArray *cursorSizes; // ivar: _cursorSizes
@property (nonatomic) CGFloat dwellDuration; // ivar: _dwellDuration
@property (nonatomic) CGFloat holdDuration; // ivar: _holdDuration
@property (nonatomic) CGFloat ignoreRepeatDuration; // ivar: _ignoreRepeatDuration
@property (nonatomic) CGFloat longPressDuration; // ivar: _longPressDuration
@property (nonatomic) NSUInteger numberOfScanLoops; // ivar: _numberOfScanLoops
@property (nonatomic) CGFloat pauseOnFirstItemInterval; // ivar: _pauseOnFirstItemInterval
@property (copy, nonatomic) NSArray *postActivationScanLocations; // ivar: _postActivationScanLocations
@property (nonatomic) CGFloat repeatActionInterval; // ivar: _repeatActionInterval
@property (copy, nonatomic) NSArray *scanningStyles; // ivar: _scanningStyles
@property (nonatomic) BOOL soundEffectsEnabled; // ivar: _soundEffectsEnabled
@property (nonatomic) BOOL speechEnabled; // ivar: _speechEnabled
@property (copy, nonatomic) NSArray *tapBehaviors; // ivar: _tapBehaviors


-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif