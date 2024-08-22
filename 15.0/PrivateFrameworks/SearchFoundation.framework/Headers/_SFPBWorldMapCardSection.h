// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBWORLDMAPCARDSECTION_H
#define _SFPBWORLDMAPCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBWorldMapCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBLatLng.h"

@interface _SFPBWorldMapCardSection : PBCodable <_SFPBWorldMapCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *highlightedTimeZoneName; // ivar: _highlightedTimeZoneName
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBLatLng *pinLocation; // ivar: _pinLocation
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif