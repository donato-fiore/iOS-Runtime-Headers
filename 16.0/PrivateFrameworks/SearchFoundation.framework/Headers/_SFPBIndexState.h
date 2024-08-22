// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBINDEXSTATE_H
#define _SFPBINDEXSTATE_H

@class PBCodable, NSString, NSData;
@protocol _SFPBIndexState, NSSecureCoding;



@interface _SFPBIndexState : PBCodable <_SFPBIndexState, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int percentAttachmentsIndexed; // ivar: _percentAttachmentsIndexed
@property (nonatomic) int percentMessagesIndexed; // ivar: _percentMessagesIndexed
@property (nonatomic) int searchIndex; // ivar: _searchIndex
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