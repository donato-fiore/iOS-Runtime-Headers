// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBSHORTCUTSEDITOREVENT_H
#define ATXPBSHORTCUTSEDITOREVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ATXPBShortcutsEditorEventMetadata.h"

@interface ATXPBShortcutsEditorEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *blendingCacheId; // ivar: _blendingCacheId
@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) ATXPBShortcutsEditorEventMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs; // ivar: _suggestionUUIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suggestionUUIDsAtIndex:(NSUInteger)arg0 ;
-(void)addSuggestionUUIDs:(id)arg0 ;
-(void)clearSuggestionUUIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif