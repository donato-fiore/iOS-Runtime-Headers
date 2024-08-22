// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPBRUNSHORTCUTEVENT_H
#define WFPBRUNSHORTCUTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBRunShortcutEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int actionCount; // ivar: _actionCount
@property (retain, nonatomic) NSString *automationSuggestionsTrialIdentifier; // ivar: _automationSuggestionsTrialIdentifier
@property (retain, nonatomic) NSString *automationType; // ivar: _automationType
@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) BOOL didPresentShareSheet; // ivar: _didPresentShareSheet
@property (nonatomic) BOOL didRunRemotely; // ivar: _didRunRemotely
@property (retain, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (nonatomic) BOOL hasActionCount;
@property (readonly, nonatomic) BOOL hasAutomationSuggestionsTrialIdentifier;
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL hasDidPresentShareSheet;
@property (nonatomic) BOOL hasDidRunRemotely;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (nonatomic) BOOL hasIsFromAutomationSuggestion;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNumberOfDialogsPresented;
@property (readonly, nonatomic) BOOL hasRunSource;
@property (readonly, nonatomic) BOOL hasScriptingRunBundleIdentifier;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (nonatomic) BOOL isFromAutomationSuggestion; // ivar: _isFromAutomationSuggestion
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) unsigned int numberOfDialogsPresented; // ivar: _numberOfDialogsPresented
@property (retain, nonatomic) NSString *runSource; // ivar: _runSource
@property (retain, nonatomic) NSString *scriptingRunBundleIdentifier; // ivar: _scriptingRunBundleIdentifier
@property (retain, nonatomic) NSString *shortcutSource; // ivar: _shortcutSource


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif