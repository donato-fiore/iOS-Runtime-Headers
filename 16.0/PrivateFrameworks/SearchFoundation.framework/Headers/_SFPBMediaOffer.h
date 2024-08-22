// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBMEDIAOFFER_H
#define _SFPBMEDIAOFFER_H

@class PBCodable, NSString, NSData;
@protocol _SFPBMediaOffer, NSSecureCoding;


#import "_SFPBActionItem.h"
#import "_SFPBImage.h"

@interface _SFPBMediaOffer : PBCodable <_SFPBMediaOffer, NSSecureCoding>



@property (retain, nonatomic) _SFPBActionItem *actionItem; // ivar: _actionItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImage *image; // ivar: _image
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *offerIdentifier; // ivar: _offerIdentifier
@property (copy, nonatomic) NSString *sublabel; // ivar: _sublabel
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif