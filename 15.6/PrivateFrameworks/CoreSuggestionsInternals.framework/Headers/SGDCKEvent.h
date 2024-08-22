// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDCKEVENT_H
#define SGDCKEVENT_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "SGDCKInteractionInfo.h"
#import "SGDCKTimeRange.h"

@interface SGDCKEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) int categoryType; // ivar: _categoryType
@property (retain, nonatomic) NSString *content; // ivar: _content
@property (nonatomic) CGFloat creationTimestamp; // ivar: _creationTimestamp
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *extraKey; // ivar: _extraKey
@property (retain, nonatomic) NSString *groupId; // ivar: _groupId
@property (nonatomic) BOOL hasAllDay;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasCategoryType;
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) BOOL hasCreationTimestamp;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasExtraKey;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (readonly, nonatomic) BOOL hasInteractionInfo;
@property (nonatomic) BOOL hasLastModifiedTimestamp;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasParentEntityType;
@property (readonly, nonatomic) BOOL hasSchemaOrg;
@property (readonly, nonatomic) BOOL hasSourceKey;
@property (readonly, nonatomic) BOOL hasTemplateName;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasWhen;
@property (retain, nonatomic) SGDCKInteractionInfo *interactionInfo; // ivar: _interactionInfo
@property (nonatomic) CGFloat lastModifiedTimestamp; // ivar: _lastModifiedTimestamp
@property (retain, nonatomic) NSMutableArray *locations; // ivar: _locations
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (nonatomic) NSInteger parentEntityType; // ivar: _parentEntityType
@property (retain, nonatomic) NSData *schemaOrg; // ivar: _schemaOrg
@property (retain, nonatomic) NSString *sourceKey; // ivar: _sourceKey
@property (retain, nonatomic) NSString *templateName; // ivar: _templateName
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) SGDCKTimeRange *when; // ivar: _when


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoryTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsCategoryType:(id)arg0 ;
-(void)addLocations:(id)arg0 ;
-(void)clearLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif