// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBCOLOR_H
#define _SFPBCOLOR_H

@class PBCodable, NSString, NSData;
@protocol _SFPBColor, NSSecureCoding;


#import "_SFPBGraphicalFloat.h"
#import "_SFPBCalendarColor.h"

@interface _SFPBColor : PBCodable <_SFPBColor, NSSecureCoding>



@property (retain, nonatomic) _SFPBGraphicalFloat *alphaComponent; // ivar: _alphaComponent
@property (retain, nonatomic) _SFPBGraphicalFloat *blueComponent; // ivar: _blueComponent
@property (retain, nonatomic) _SFPBCalendarColor *calendarColor; // ivar: _calendarColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _SFPBGraphicalFloat *greenComponent; // ivar: _greenComponent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBGraphicalFloat *redComponent; // ivar: _redComponent
@property (readonly) Class superclass;
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