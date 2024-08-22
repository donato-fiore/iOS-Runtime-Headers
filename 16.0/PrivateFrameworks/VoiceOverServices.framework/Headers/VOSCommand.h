// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOSCOMMAND_H
#define VOSCOMMAND_H

@class NSString, AXSiriShortcut;

#import <Foundation/Foundation.h>


@interface VOSCommand : NSObject {
    NSString *_rawValue;
    AXSiriShortcut *_siriShortcut;
}


@property (nonatomic) NSInteger commandType; // ivar: _commandType
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *rawValue;
@property (readonly, nonatomic) AXSiriShortcut *siriShortcut;
@property (retain, nonatomic) NSString *votEventCommandName; // ivar: _votEventCommandName


+(id)ActivateAccessibilityShortcut;
+(id)ActivateBrailleScreenInput;
+(id)ActivateHomeButton;
+(id)ActivateLockButton;
+(id)ActivateSpeakScreen;
+(id)AnalyzeElement;
+(id)AnnounceHandwritingCharacterMode;
+(id)BSINextBrailleMode;
+(id)BSIOrientationLock;
+(id)BSIPreviousBrailleMode;
+(id)BSIQuickAction;
+(id)BSITranslateImmediately;
+(id)Copy;
+(id)CopySpeechToClipboard;
+(id)Cut;
+(id)DescribeImage;
+(id)Escape;
+(id)FindElementWithTextSearch;
+(id)GesturedTextInputBackspace;
+(id)GesturedTextInputDeleteWord;
+(id)GesturedTextInputInsertSpace;
+(id)GesturedTextInputLaunchApp;
+(id)GesturedTextInputNextBrailleTable;
+(id)GesturedTextInputNextKeyboardLanguage;
+(id)GesturedTextInputNextSuggestion;
+(id)GesturedTextInputPerformReturnEquivalent;
+(id)GesturedTextInputPreviousSuggestion;
+(id)Invalid;
+(id)LabelElement;
+(id)LaunchPeopleDetection;
+(id)MagicTap;
+(id)MonitorElement;
+(id)MoveIn;
+(id)MoveOut;
+(id)MoveToBottomOfCurrentContainer;
+(id)MoveToBottomOfCurrentDocument;
+(id)MoveToElementAbove;
+(id)MoveToElementBelow;
+(id)MoveToFirstElement;
+(id)MoveToFirstWord;
+(id)MoveToLastElement;
+(id)MoveToLastWord;
+(id)MoveToLinkedUI;
+(id)MoveToNextBlockquote;
+(id)MoveToNextBoldText;
+(id)MoveToNextCharacter;
+(id)MoveToNextColorChange;
+(id)MoveToNextColumn;
+(id)MoveToNextContainer;
+(id)MoveToNextControl;
+(id)MoveToNextDifferentElement;
+(id)MoveToNextElement;
+(id)MoveToNextElementCommunity;
+(id)MoveToNextFontChange;
+(id)MoveToNextFrame;
+(id)MoveToNextGraphic;
+(id)MoveToNextHeading;
+(id)MoveToNextItalicText;
+(id)MoveToNextLink;
+(id)MoveToNextList;
+(id)MoveToNextMisspelledWord;
+(id)MoveToNextParagraph;
+(id)MoveToNextPlainText;
+(id)MoveToNextSameBlockquote;
+(id)MoveToNextSameElement;
+(id)MoveToNextSameHeading;
+(id)MoveToNextSentence;
+(id)MoveToNextStyleChange;
+(id)MoveToNextTable;
+(id)MoveToNextUnderlineText;
+(id)MoveToNextVisitedLink;
+(id)MoveToNextWord;
+(id)MoveToPreviousBlockquote;
+(id)MoveToPreviousBoldText;
+(id)MoveToPreviousCharacter;
+(id)MoveToPreviousColorChange;
+(id)MoveToPreviousColumn;
+(id)MoveToPreviousContainer;
+(id)MoveToPreviousControl;
+(id)MoveToPreviousDifferentElement;
+(id)MoveToPreviousElement;
+(id)MoveToPreviousElementCommunity;
+(id)MoveToPreviousFontChange;
+(id)MoveToPreviousFrame;
+(id)MoveToPreviousGraphic;
+(id)MoveToPreviousHeading;
+(id)MoveToPreviousItalicText;
+(id)MoveToPreviousLink;
+(id)MoveToPreviousList;
+(id)MoveToPreviousMisspelledWord;
+(id)MoveToPreviousParagraph;
+(id)MoveToPreviousPlainText;
+(id)MoveToPreviousSameBlockquote;
+(id)MoveToPreviousSameElement;
+(id)MoveToPreviousSameHeading;
+(id)MoveToPreviousSentence;
+(id)MoveToPreviousStyleChange;
+(id)MoveToPreviousTable;
+(id)MoveToPreviousUnderlineText;
+(id)MoveToPreviousVisitedLink;
+(id)MoveToPreviousWord;
+(id)MoveToStatusBar;
+(id)MoveToSystemFocusedElement;
+(id)MoveToTopOfCurrentContainer;
+(id)MoveToTopOfCurrentDocument;
+(id)NextHandwritingCharacterMode;
+(id)NextRotor;
+(id)NextRotorItem;
+(id)NextSearchResult;
+(id)None;
+(id)OpenVoiceOverSettings;
+(id)Paste;
+(id)PerformLongPress;
+(id)PreviewElementWith3DTouch;
+(id)PreviousHandwritingCharacterMode;
+(id)PreviousRotor;
+(id)PreviousRotorItem;
+(id)PreviousSearchResult;
+(id)PrimaryActivate;
+(id)ReadAll;
+(id)ReadCharacter;
+(id)ReadCharacterPhonetically;
+(id)ReadColumnContents;
+(id)ReadColumnHeader;
+(id)ReadFromTop;
+(id)ReadHint;
+(id)ReadLine;
+(id)ReadLineCount;
+(id)ReadRowContents;
+(id)ReadRowHeader;
+(id)ReadSelectedText;
+(id)ReadSystemFocusedElementDetails;
+(id)ReadTableRowColumn;
+(id)ReadTableRowColumnCell;
+(id)ReadTextStyle;
+(id)ReadURL;
+(id)ReadWord;
+(id)Redo;
+(id)ScrollDown;
+(id)ScrollLeft;
+(id)ScrollRight;
+(id)ScrollUp;
+(id)SecondaryActivate;
+(id)ShowControlCenter;
+(id)ShowItemChooser;
+(id)ShowNotificationCenter;
+(id)ShowSpotlight;
+(id)StartHelp;
+(id)SummarizeElement;
+(id)SummarizeSystemFocusedElement;
+(id)SwitchToNextApp;
+(id)SwitchToPreviousApp;
+(id)TakeScreenshot;
+(id)ToggleAppSwitcher;
+(id)ToggleAudioDucking;
+(id)ToggleAutomaticAccessibility;
+(id)ToggleCaptionPanel;
+(id)ToggleDock;
+(id)ToggleLockModifierKeys;
+(id)ToggleMute;
+(id)ToggleNavigationStyle;
+(id)ToggleQuickNote;
+(id)ToggleReachability;
+(id)ToggleScreenCurtain;
+(id)ToggleSettingsHUD;
+(id)ToggleSingleLetterQuickNav;
+(id)ToggleSpeech;
+(id)ToggleSyncNativeAndExploreFocus;
+(id)ToggleTextSelection;
+(id)Undo;
+(id)VolumeDown;
+(id)VolumeUp;
+(id)allBuiltInCommands;
+(id)builtInCommandWithStringValue:(id)arg0 ;
+(id)commandForVOSEventCommand:(id)arg0 ;
+(id)commandWithSiriShortcut:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initBuiltInCommandWithRawValue:(id)arg0 votEventCommandName:(id)arg1 ;
-(id)_initWithSiriShortcut:(id)arg0 ;
-(id)description;


@end


#endif