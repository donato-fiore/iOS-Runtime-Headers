// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMACARPLAYINVOCATIONCONTEXT_H
#define SISCHEMACARPLAYINVOCATIONCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaCarPlayInvocationContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) int directAction; // ivar: _directAction
@property (nonatomic) int enhancedVoiceTriggerMode; // ivar: _enhancedVoiceTriggerMode
@property (nonatomic) BOOL hasBundleID; // ivar: _hasBundleID
@property (nonatomic) BOOL hasDirectAction;
@property (nonatomic) BOOL hasEnhancedVoiceTriggerMode;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBundleID;
-(void)deleteDirectAction;
-(void)deleteEnhancedVoiceTriggerMode;
-(void)writeTo:(id)arg0 ;


@end


#endif