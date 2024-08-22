// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBRESPONSEWRAPPERCARDSECTION_H
#define _SFPBRESPONSEWRAPPERCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBResponseWrapperCardSection, NSSecureCoding;


#import "_SFPBCATModel.h"
#import "_SFPBPatternModel.h"

@interface _SFPBResponseWrapperCardSection : PBCodable <_SFPBResponseWrapperCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBCATModel *catModel; // ivar: _catModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBPatternModel *pattern_model; // ivar: _pattern_model
@property (copy, nonatomic) NSArray *pattern_models; // ivar: _pattern_models
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *visualCATOutput; // ivar: _visualCATOutput


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)pattern_modelsAtIndex:(NSUInteger)arg0 ;
-(void)addPattern_models:(id)arg0 ;
-(void)clearPattern_models;
-(void)writeTo:(id)arg0 ;


@end


#endif