// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESONDEVICEMETADATA_H
#define POMMESSCHEMAPOMMESONDEVICEMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESOnDeviceMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasOnScreenAppBundleIdDomain; // ivar: _hasOnScreenAppBundleIdDomain
@property (nonatomic) BOOL hasOnScreenUriDomain; // ivar: _hasOnScreenUriDomain
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *onScreenAppBundleIdDomain; // ivar: _onScreenAppBundleIdDomain
@property (copy, nonatomic) NSString *onScreenUriDomain; // ivar: _onScreenUriDomain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteOnScreenAppBundleIdDomain;
-(void)deleteOnScreenUriDomain;
-(void)writeTo:(id)arg0 ;


@end


#endif