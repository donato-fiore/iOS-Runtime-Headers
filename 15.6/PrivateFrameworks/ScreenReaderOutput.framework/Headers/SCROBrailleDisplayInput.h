// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCROBRAILLEDISPLAYINPUT_H
#define SCROBRAILLEDISPLAYINPUT_H


#import <Foundation/Foundation.h>


@interface SCROBrailleDisplayInput : NSObject

@property (nonatomic) CGFloat brailleCharExponentialMovingAverage; // ivar: _brailleCharExponentialMovingAverage
@property (nonatomic) CGFloat brailleTranslationTimeout; // ivar: _brailleTranslationTimeout
@property (nonatomic) CGFloat busySince; // ivar: _busySince
@property (nonatomic) *__CFArray currentBrailleChord; // ivar: _currentBrailleChord
@property (nonatomic) BOOL currentBrailleChordBeganWithSpacebar; // ivar: _currentBrailleChordBeganWithSpacebar
@property (nonatomic) BOOL currentBrailleChordContainsNonSpacebarChordableKey; // ivar: _currentBrailleChordContainsNonSpacebarChordableKey
@property (nonatomic) BOOL currentBrailleChordContainsSpacebar; // ivar: _currentBrailleChordContainsSpacebar
@property (nonatomic) unsigned int currentBrailleModifiers; // ivar: _currentBrailleModifiers
@property (nonatomic) *__CFArray currentChord; // ivar: _currentChord
@property (nonatomic) unsigned int currentHIDCommand; // ivar: _currentHIDCommand
@property (nonatomic) *__CFSet downBrailleDots; // ivar: _downBrailleDots
@property (nonatomic) unsigned int downBrailleModifiers; // ivar: _downBrailleModifiers
@property (nonatomic) *__CFSet downKeys; // ivar: _downKeys
@property (nonatomic) BOOL isQuiet; // ivar: _isQuiet
@property (nonatomic) CGFloat lastBrailleChordPosted; // ivar: _lastBrailleChordPosted
@property (nonatomic) CGFloat lastBrailleChordTypingTime; // ivar: _lastBrailleChordTypingTime
@property (nonatomic) BOOL memorizeNextKeyImmediately; // ivar: _memorizeNextKeyImmediately
@property (nonatomic) CGFloat memorizeNextKeyImmediatelyTimeout; // ivar: _memorizeNextKeyImmediatelyTimeout
@property (nonatomic) BOOL newDown; // ivar: _newDown
@property (nonatomic) CGFloat nextWillMemorizeNotificationTime; // ivar: _nextWillMemorizeNotificationTime
@property (nonatomic) BOOL prepareToMemorizeNextKey; // ivar: _prepareToMemorizeNextKey
@property (nonatomic) CGFloat quietSince; // ivar: _quietSince
@property (nonatomic) BOOL requestPrepareToMemorizeNextKey; // ivar: _requestPrepareToMemorizeNextKey
@property (nonatomic) unsigned int routerEvent; // ivar: _routerEvent
@property (nonatomic) BOOL skipBrailleKeyboardKeyTranslation; // ivar: _skipBrailleKeyboardKeyTranslation
@property (nonatomic) BOOL spacebarIsDown; // ivar: _spacebarIsDown
@property (nonatomic) BOOL willMemorizeNow; // ivar: _willMemorizeNow


-(void)dealloc;


@end


#endif