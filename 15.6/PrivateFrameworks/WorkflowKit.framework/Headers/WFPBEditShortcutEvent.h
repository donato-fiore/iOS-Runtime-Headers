// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPBEDITSHORTCUTEVENT_H
#define WFPBEDITSHORTCUTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBEditShortcutEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int actionCount; // ivar: _actionCount
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier; // ivar: _addToSiriBundleIdentifier
@property (retain, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (nonatomic) BOOL hasActionCount;
@property (readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNumberOfEngagedSuggestions;
@property (nonatomic) BOOL hasNumberOfManuallyAddedActions;
@property (nonatomic) BOOL hasNumberOfRejectedSuggestions;
@property (nonatomic) BOOL hasNumberOfShownSuggestions;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (nonatomic) BOOL hasStartingActionCount;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) unsigned int numberOfEngagedSuggestions; // ivar: _numberOfEngagedSuggestions
@property (nonatomic) unsigned int numberOfManuallyAddedActions; // ivar: _numberOfManuallyAddedActions
@property (nonatomic) unsigned int numberOfRejectedSuggestions; // ivar: _numberOfRejectedSuggestions
@property (nonatomic) unsigned int numberOfShownSuggestions; // ivar: _numberOfShownSuggestions
@property (retain, nonatomic) NSString *shortcutSource; // ivar: _shortcutSource
@property (nonatomic) unsigned int startingActionCount; // ivar: _startingActionCount


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