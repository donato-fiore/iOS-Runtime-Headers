// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPERSONALIZATIONWHITELIST_H
#define NTPBPERSONALIZATIONWHITELIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *defaultTags; // ivar: _defaultTags
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags; // ivar: _disabledPortraitTags
@property (retain, nonatomic) NSMutableArray *optionalTags; // ivar: _optionalTags


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultTagsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)disabledPortraitTagsAtIndex:(NSUInteger)arg0 ;
-(id)optionalTagsAtIndex:(NSUInteger)arg0 ;
-(void)addDefaultTags:(id)arg0 ;
-(void)addDisabledPortraitTags:(id)arg0 ;
-(void)addOptionalTags:(id)arg0 ;
-(void)clearDefaultTags;
-(void)clearDisabledPortraitTags;
-(void)clearOptionalTags;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif