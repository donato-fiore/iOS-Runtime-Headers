// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBLISTSHORTCUTSINTENT_H
#define _INPBLISTSHORTCUTSINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBListShortcutsIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBListShortcutsIntent : PBCodable <_INPBListShortcutsIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *appTitles; // ivar: _appTitles
@property (readonly, nonatomic) NSUInteger appTitlesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasOriginDevice;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int originDevice; // ivar: _originDevice
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)appTitleType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)appTitleAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)originDeviceAsString:(int)arg0 ;
-(int)StringAsOriginDevice:(id)arg0 ;
-(void)addAppTitle:(id)arg0 ;
-(void)clearAppTitles;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif