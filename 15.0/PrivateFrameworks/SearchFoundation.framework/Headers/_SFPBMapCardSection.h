// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBMAPCARDSECTION_H
#define _SFPBMAPCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBMapCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBMapRegion.h"
#import "_SFPBLatLng.h"

@interface _SFPBMapCardSection : PBCodable <_SFPBMapCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) _SFPBMapRegion *boundingMapRegion; // ivar: _boundingMapRegion
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (copy, nonatomic) NSString *footnoteLabel; // ivar: _footnoteLabel
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactive; // ivar: _interactive
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBLatLng *location; // ivar: _location
@property (nonatomic) int pinBehavior; // ivar: _pinBehavior
@property (retain, nonatomic) _SFPBColor *pinColor; // ivar: _pinColor
@property (copy, nonatomic) NSArray *pins; // ivar: _pins
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (nonatomic) int sizeFormat; // ivar: _sizeFormat
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)pinsAtIndex:(NSUInteger)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addPins:(id)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearPins;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif