// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAHARDWAREINTERFACEIDENTIFIER_H
#define SISCHEMAHARDWAREINTERFACEIDENTIFIER_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaHardwareInterfaceIdentifier : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasInterfaceProductID; // ivar: _hasInterfaceProductID
@property (nonatomic) BOOL hasInterfaceVendorID; // ivar: _hasInterfaceVendorID
@property (copy, nonatomic) NSString *interfaceProductID; // ivar: _interfaceProductID
@property (copy, nonatomic) NSString *interfaceVendorID; // ivar: _interfaceVendorID
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteInterfaceProductID;
-(void)deleteInterfaceVendorID;
-(void)writeTo:(id)arg0 ;


@end


#endif