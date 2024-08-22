// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBAPPLINK_H
#define _SFPBAPPLINK_H

@class PBCodable, NSString, NSData;
@protocol _SFPBAppLink, NSSecureCoding;


#import "_SFPBPunchout.h"
#import "_SFPBImage.h"

@interface _SFPBAppLink : PBCodable <_SFPBAppLink, NSSecureCoding>



@property (retain, nonatomic) _SFPBPunchout *appPunchout; // ivar: _appPunchout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImage *image; // ivar: _image
@property (nonatomic) int imageAlign; // ivar: _imageAlign
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif