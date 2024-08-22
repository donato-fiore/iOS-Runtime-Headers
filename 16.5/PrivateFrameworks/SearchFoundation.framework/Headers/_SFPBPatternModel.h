// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBPATTERNMODEL_H
#define _SFPBPATTERNMODEL_H

@class PBCodable, NSString, NSData;
@protocol _SFPBPatternModel, NSSecureCoding;



@interface _SFPBPatternModel : PBCodable <_SFPBPatternModel, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *pattern_bundle_id; // ivar: _pattern_bundle_id
@property (copy, nonatomic) NSString *pattern_id; // ivar: _pattern_id
@property (copy, nonatomic) NSData *pattern_parameters; // ivar: _pattern_parameters
@property (copy, nonatomic) NSString *pattern_template_directory; // ivar: _pattern_template_directory
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