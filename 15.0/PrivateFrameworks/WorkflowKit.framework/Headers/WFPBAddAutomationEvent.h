// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPBADDAUTOMATIONEVENT_H
#define WFPBADDAUTOMATIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBAddAutomationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int actionCount; // ivar: _actionCount
@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) NSString *automationSuggestionsTrialIdentifier; // ivar: _automationSuggestionsTrialIdentifier
@property (nonatomic) BOOL hasActionCount;
@property (readonly, nonatomic) BOOL hasActivityType;
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasAutomationSuggestionsTrialIdentifier;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasShortcutIdentifier;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (retain, nonatomic) NSString *intentType; // ivar: _intentType
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *shortcutIdentifier; // ivar: _shortcutIdentifier
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) NSString *triggerType; // ivar: _triggerType


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