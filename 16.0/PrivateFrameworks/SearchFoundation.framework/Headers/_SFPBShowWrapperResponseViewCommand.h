// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBSHOWWRAPPERRESPONSEVIEWCOMMAND_H
#define _SFPBSHOWWRAPPERRESPONSEVIEWCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBShowWrapperResponseViewCommand, NSSecureCoding;


#import "_SFPBCATModel.h"

@interface _SFPBShowWrapperResponseViewCommand : PBCodable <_SFPBShowWrapperResponseViewCommand, NSSecureCoding>



@property (retain, nonatomic) _SFPBCATModel *catModel; // ivar: _catModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
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