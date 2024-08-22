// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENTSUPPORT_H
#define _INPBINTENTSUPPORT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBIntentSupport, NSSecureCoding, NSCopying;



@interface _INPBIntentSupport : PBCodable <_INPBIntentSupport, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *intentsRestrictedWhileLockeds; // ivar: _intentsRestrictedWhileLockeds
@property (readonly, nonatomic) NSUInteger intentsRestrictedWhileLockedsCount;
@property (copy, nonatomic) NSArray *intentsSupporteds; // ivar: _intentsSupporteds
@property (readonly, nonatomic) NSUInteger intentsSupportedsCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedMediaCategories; // ivar: _supportedMediaCategories
@property (readonly, nonatomic) NSUInteger supportedMediaCategoriesCount;


+(BOOL)supportsSecureCoding;
+(Class)intentsRestrictedWhileLockedType;
+(Class)intentsSupportedType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)intentsRestrictedWhileLockedAtIndex:(NSUInteger)arg0 ;
-(id)intentsSupportedAtIndex:(NSUInteger)arg0 ;
-(id)supportedMediaCategoriesAtIndex:(NSUInteger)arg0 ;
-(void)addIntentsRestrictedWhileLocked:(id)arg0 ;
-(void)addIntentsSupported:(id)arg0 ;
-(void)addSupportedMediaCategories:(id)arg0 ;
-(void)clearIntentsRestrictedWhileLockeds;
-(void)clearIntentsSupporteds;
-(void)clearSupportedMediaCategories;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif