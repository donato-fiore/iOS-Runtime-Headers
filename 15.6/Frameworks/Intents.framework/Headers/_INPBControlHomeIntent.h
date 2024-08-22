// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCONTROLHOMEINTENT_H
#define _INPBCONTROLHOMEINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBControlHomeIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBDateTimeRange.h"
#import "_INPBHomeUserTask.h"

@interface _INPBControlHomeIntent : PBCodable <_INPBControlHomeIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *contents; // ivar: _contents
@property (readonly, nonatomic) NSUInteger contentsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly, nonatomic) NSUInteger filtersCount;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasTime;
@property (readonly, nonatomic) BOOL hasUserTask;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDateTimeRange *time; // ivar: _time
@property (retain, nonatomic) _INPBHomeUserTask *userTask; // ivar: _userTask


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)contentsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)filtersAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addContents:(id)arg0 ;
-(void)addFilters:(id)arg0 ;
-(void)clearContents;
-(void)clearFilters;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif