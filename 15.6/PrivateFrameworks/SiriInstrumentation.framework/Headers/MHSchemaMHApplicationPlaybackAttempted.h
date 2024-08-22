// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHAPPLICATIONPLAYBACKATTEMPTED_H
#define MHSCHEMAMHAPPLICATIONPLAYBACKATTEMPTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHApplicationPlaybackAttempted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *appBundleName; // ivar: _appBundleName
@property (copy, nonatomic) NSString *appBundleVersion; // ivar: _appBundleVersion
@property (nonatomic) BOOL hasAppBundleName; // ivar: _hasAppBundleName
@property (nonatomic) BOOL hasAppBundleVersion; // ivar: _hasAppBundleVersion
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppBundleName;
-(void)deleteAppBundleVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif