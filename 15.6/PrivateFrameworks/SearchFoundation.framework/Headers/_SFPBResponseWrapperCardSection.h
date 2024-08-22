// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBRESPONSEWRAPPERCARDSECTION_H
#define _SFPBRESPONSEWRAPPERCARDSECTION_H

@class PBCodable, NSString, NSData;
@protocol _SFPBResponseWrapperCardSection, NSSecureCoding;


#import "_SFPBCATModel.h"

@interface _SFPBResponseWrapperCardSection : PBCodable <_SFPBResponseWrapperCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBCATModel *catModel; // ivar: _catModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *visualCATOutput; // ivar: _visualCATOutput


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif