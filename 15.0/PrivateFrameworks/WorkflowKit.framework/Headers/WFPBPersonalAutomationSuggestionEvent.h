// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPBPERSONALAUTOMATIONSUGGESTIONEVENT_H
#define WFPBPERSONALAUTOMATIONSUGGESTIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBPersonalAutomationSuggestionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (nonatomic) BOOL completed; // ivar: _completed
@property (readonly, nonatomic) BOOL hasActivityType;
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (nonatomic) BOOL hasCompleted;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (nonatomic) BOOL hasInteracted;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (nonatomic) BOOL hasVisible;
@property (retain, nonatomic) NSString *intentType; // ivar: _intentType
@property (nonatomic) BOOL interacted; // ivar: _interacted
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) NSString *triggerType; // ivar: _triggerType
@property (nonatomic) BOOL visible; // ivar: _visible


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