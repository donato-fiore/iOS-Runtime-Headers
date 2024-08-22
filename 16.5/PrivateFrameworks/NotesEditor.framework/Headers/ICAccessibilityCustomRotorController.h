// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACCESSIBILITYCUSTOMROTORCONTROLLER_H
#define ICACCESSIBILITYCUSTOMROTORCONTROLLER_H

@class UIAccessibilityCustomRotor, NSArray;

#import <Foundation/Foundation.h>

#import "ICNoteEditorViewController.h"

@interface ICAccessibilityCustomRotorController : NSObject

@property (readonly, nonatomic) UIAccessibilityCustomRotor *attachmentsRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *checklistRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *linksRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *mentionsRotor;
@property (weak, nonatomic) ICNoteEditorViewController *noteEditorViewController; // ivar: _noteEditorViewController
@property (readonly, nonatomic) NSArray *sharedTextViewRotors;
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedAttachmentsRotor; // ivar: _storedAttachmentsRotor
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedChecklistRotor; // ivar: _storedChecklistRotor
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedLinksRotor; // ivar: _storedLinksRotor
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedMentionsRotor; // ivar: _storedMentionsRotor
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedTablesRotor; // ivar: _storedTablesRotor
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedTagsRotor; // ivar: _storedTagsRotor
@property (readonly, nonatomic) UIAccessibilityCustomRotor *tablesRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *tagsRotor;


+(id)sharedInstance;
-(id)searchForAXElementWithPredicate:(id)arg0 rotorType:(id)arg1 ;


@end


#endif