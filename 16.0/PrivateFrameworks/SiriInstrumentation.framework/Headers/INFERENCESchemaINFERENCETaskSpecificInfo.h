// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCETASKSPECIFICINFO_H
#define INFERENCESCHEMAINFERENCETASKSPECIFICINFO_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCELongRunningTaskInfo.h"

@interface INFERENCESchemaINFERENCETaskSpecificInfo : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLongRunningTaskInfo; // ivar: _hasLongRunningTaskInfo
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) INFERENCESchemaINFERENCELongRunningTaskInfo *longRunningTaskInfo; // ivar: _longRunningTaskInfo
@property (readonly, nonatomic) NSUInteger whichTaskinfo; // ivar: _whichTaskinfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLongRunningTaskInfo;
-(void)writeTo:(id)arg0 ;


@end


#endif