// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETPROTOBUFRAWDECODEDMESSAGE_H
#define PETPROTOBUFRAWDECODEDMESSAGE_H

@class PBCodable, NSMutableDictionary, NSDictionary;



@interface PETProtobufRawDecodedMessage : PBCodable {
    NSMutableDictionary *_decodedDict;
    NSDictionary *_nestedFields;
}




-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 nestedFields:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif