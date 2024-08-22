// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWSCHEMAFLOWAPPCONTEXT_H
#define FLOWSCHEMAFLOWAPPCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWAppContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int appResolutionType; // ivar: _appResolutionType
@property (copy, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL hasAppResolutionType;
@property (nonatomic) BOOL hasAppVersion; // ivar: _hasAppVersion
@property (nonatomic) BOOL hasBundleId; // ivar: _hasBundleId
@property (nonatomic) BOOL hasIsSmartEnoughAppSelectionUsed;
@property (nonatomic) BOOL isSmartEnoughAppSelectionUsed; // ivar: _isSmartEnoughAppSelectionUsed
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif