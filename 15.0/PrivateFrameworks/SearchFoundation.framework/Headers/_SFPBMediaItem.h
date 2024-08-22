// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBMEDIAITEM_H
#define _SFPBMEDIAITEM_H

@class PBCodable, NSArray, NSString, NSData;
@protocol _SFPBMediaItem, NSSecureCoding;


#import "_SFPBImage.h"
#import "_SFPBPunchout.h"
#import "_SFPBText.h"

@interface _SFPBMediaItem : PBCodable <_SFPBMediaItem, NSSecureCoding>



@property (copy, nonatomic) NSArray *buyOptions; // ivar: _buyOptions
@property (copy, nonatomic) NSString *contentAdvisory; // ivar: _contentAdvisory
@property (retain, nonatomic) _SFPBImage *contentAdvisoryImage; // ivar: _contentAdvisoryImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBImage *overlayImage; // ivar: _overlayImage
@property (retain, nonatomic) _SFPBPunchout *punchout; // ivar: _punchout
@property (retain, nonatomic) _SFPBImage *reviewGlyph; // ivar: _reviewGlyph
@property (copy, nonatomic) NSString *reviewText; // ivar: _reviewText
@property (copy, nonatomic) NSArray *subtitleCustomLineBreakings; // ivar: _subtitleCustomLineBreakings
@property (retain, nonatomic) _SFPBText *subtitleText; // ivar: _subtitleText
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBImage *thumbnail; // ivar: _thumbnail
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)buyOptionsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)subtitleCustomLineBreakingAtIndex:(NSUInteger)arg0 ;
-(void)addBuyOptions:(id)arg0 ;
-(void)addSubtitleCustomLineBreaking:(id)arg0 ;
-(void)clearBuyOptions;
-(void)setSubtitleCustomLineBreaking:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif