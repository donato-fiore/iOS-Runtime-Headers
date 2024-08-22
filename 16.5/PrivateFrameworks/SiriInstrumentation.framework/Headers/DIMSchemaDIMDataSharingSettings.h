// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIMSCHEMADIMDATASHARINGSETTINGS_H
#define DIMSCHEMADIMDATASHARINGSETTINGS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DIMSchemaDIMDataSharingSettings : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsAppAnalyticsEnabled;
@property (nonatomic) BOOL hasIsDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL isAppAnalyticsEnabled; // ivar: _isAppAnalyticsEnabled
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled; // ivar: _isDiagnosticsAndUsageEnabled
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsAppAnalyticsEnabled;
-(void)deleteIsDiagnosticsAndUsageEnabled;
-(void)writeTo:(id)arg0 ;


@end


#endif