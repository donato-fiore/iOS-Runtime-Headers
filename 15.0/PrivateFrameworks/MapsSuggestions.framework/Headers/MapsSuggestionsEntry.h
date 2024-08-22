// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSENTRY_H
#define MAPSSUGGESTIONSENTRY_H

@class NSMutableSet, NSMutableDictionary, NSString, NSDate, GEOMapItemStorage, NSData;
@protocol NSCopying, NSSecureCoding, MapsSuggestionsObject, MapsSuggestionsJSONable;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsEntry : NSObject <NSCopying, NSSecureCoding, MapsSuggestionsObject, MapsSuggestionsJSONable>

 {
    NSMutableSet *_typeHistory;
    NSMutableDictionary *_sourceSpecificInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (readonly, copy, nonatomic) NSString *description;
@property (retain, nonatomic) NSDate *expires; // ivar: _expires
@property (readonly, copy, nonatomic) NSString *fullDescription;
@property (retain, nonatomic) GEOMapItemStorage *geoMapItem; // ivar: _geoMapItem
@property (readonly, nonatomic) BOOL hasExpired;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) BOOL isPureShortcut;
@property (readonly, nonatomic) BOOL isShortcut;
@property (readonly, nonatomic) BOOL isShortcutForSetup;
@property (retain, nonatomic) NSString *originatingSourceName; // ivar: _originatingSourceName
@property (readonly, copy, nonatomic) NSString *serializedBase64String;
@property (readonly, copy, nonatomic) NSString *serializedHexString;
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSString *shortcutIdentifier;
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *subtitleWhenLocked; // ivar: _subtitleWhenLocked
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *titleWhenLocked; // ivar: _titleWhenLocked
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSString *undecoratedSubtitle; // ivar: _undecoratedSubtitle
@property (retain, nonatomic) NSString *undecoratedSubtitleWhenLocked; // ivar: _undecoratedSubtitleWhenLocked
@property (retain, nonatomic) NSString *undecoratedTitle; // ivar: _undecoratedTitle
@property (retain, nonatomic) NSString *undecoratedTitleWhenLocked; // ivar: _undecoratedTitleWhenLocked
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *uniqueName;
@property (nonatomic) CGFloat weight; // ivar: _weight


+(BOOL)supportsSecureCoding;
+(id)entryFromSerializedBase64String:(id)arg0 hasPrefix:(BOOL)arg1 ;
+(id)entryFromSerializedHexString:(id)arg0 hasPrefix:(BOOL)arg1 ;
+(id)entryFromSerializedString:(id)arg0 ;
+(id)entryWithData:(id)arg0 ;
+(id)entryWithType:(NSInteger)arg0 title:(id)arg1 subtitle:(id)arg2 weight:(CGFloat)arg3 expires:(id)arg4 sourceSpecificInfo:(id)arg5 ;
+(int)defaultDirectionsTransportType;
-(BOOL)_wasEverOfType:(NSInteger)arg0 ;
-(BOOL)_wasEverOneOfTypes:(id)arg0 ;
-(BOOL)booleanForKey:(id)arg0 ;
-(BOOL)booleanForKey:(id)arg0 is:(BOOL)arg1 ;
-(BOOL)containsKey:(id)arg0 ;
-(BOOL)expiresBeforeEntry:(id)arg0 ;
-(BOOL)hasEndTime;
-(BOOL)hasEssentialFlightInfo;
-(BOOL)hasFullFlightInfoAndGate;
-(BOOL)hasStartAndEndTime;
-(BOOL)hasStartTime;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntry:(id)arg0 ;
-(BOOL)startsBeforeEntry:(id)arg0 ;
-(BOOL)updateUndecoratedSubtitle:(id)arg0 ;
-(BOOL)updateUndecoratedTitle:(id)arg0 ;
-(BOOL)wasEverOfType:(NSInteger)arg0 ;
-(BOOL)wasEverOneOfTypes:(id)arg0 ;
-(NSInteger)availableRemovalBehaviors;
-(NSInteger)integerForKey:(id)arg0 ;
-(NSUInteger)uint64ForKey:(id)arg0 ;
-(id)ETAForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 ;
-(id)UUIDForKey:(id)arg0 ;
-(id)contacts;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)dateForKey:(id)arg0 ;
-(id)departingAirportCode;
-(id)endTime;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 title:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 title:(id)arg1 subtitle:(id)arg2 weight:(CGFloat)arg3 expires:(id)arg4 geoMapItem:(id)arg5 sourceSpecificInfo:(id)arg6 ;
-(id)mapItemHandleData;
-(id)nameForJSON;
-(id)numberForKey:(id)arg0 ;
-(id)objectForJSON;
-(id)sourceSpecificInfo;
-(id)startTime;
-(id)stringForKey:(id)arg0 ;
-(void)_overrideType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeFromSuggestionEntry:(id)arg0 behavior:(NSUInteger)arg1 ;
-(void)mergeFromSuggestionEntry:(id)arg0 behavior:(NSUInteger)arg1 protectTitles:(BOOL)arg2 protectTitleDecorations:(BOOL)arg3 protectMapItem:(BOOL)arg4 protectWeight:(BOOL)arg5 protectExpiration:(BOOL)arg6 protectIcon:(BOOL)arg7 ;
-(void)mergeSpecificsFromSuggestionEntry:(id)arg0 behavior:(NSUInteger)arg1 ;
-(void)replaceByEntry:(id)arg0 ;
-(void)replaceByEntry:(id)arg0 forceDecoratedOverwrites:(BOOL)arg1 ;
-(void)resetAvailableRemovalBehavior:(NSInteger)arg0 ;
-(void)setAvailableRemovalBehavior:(NSInteger)arg0 ;
-(void)setBoolean:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setContacts:(id)arg0 ;
-(void)setDate:(id)arg0 forKey:(id)arg1 ;
-(void)setETA:(id)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setMapItemHandleData:(id)arg0 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setSourceSpecificInfo:(id)arg0 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)setURL:(id)arg0 forKey:(id)arg1 ;
-(void)setUUID:(id)arg0 forKey:(id)arg1 ;


@end


#endif