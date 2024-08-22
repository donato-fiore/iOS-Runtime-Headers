// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBBUTTON_H
#define _SFPBBUTTON_H

@class PBCodable, NSString, NSData;
@protocol _SFPBButton, NSSecureCoding;


#import "_SFPBImage.h"

@interface _SFPBButton : PBCodable <_SFPBButton, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImage *image; // ivar: _image
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBImage *selectedImage; // ivar: _selectedImage
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