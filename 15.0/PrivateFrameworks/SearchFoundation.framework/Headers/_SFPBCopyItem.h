// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBCOPYITEM_H
#define _SFPBCOPYITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBCopyItem, NSSecureCoding;


#import "_SFPBImageCopyItem.h"
#import "_SFPBCoreSpotlightCopyItem.h"
#import "_SFPBTextCopyItem.h"

@interface _SFPBCopyItem : PBCodable <_SFPBCopyItem, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImageCopyItem *imageCopyItem; // ivar: _imageCopyItem
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBCoreSpotlightCopyItem *spotlightCopyItem; // ivar: _spotlightCopyItem
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBTextCopyItem *textCopyItem; // ivar: _textCopyItem
@property (readonly, nonatomic) NSUInteger whichValue; // ivar: _whichValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif