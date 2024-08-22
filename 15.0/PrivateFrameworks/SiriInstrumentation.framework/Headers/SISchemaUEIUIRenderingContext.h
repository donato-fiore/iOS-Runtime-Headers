// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAUEIUIRENDERINGCONTEXT_H
#define SISCHEMAUEIUIRENDERINGCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUEIUIRenderingEnded.h"
#import "SISchemaUEIUIRenderingStarted.h"

@interface SISchemaUEIUIRenderingContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUEIUIRenderingEnded *ended; // ivar: _ended
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUEIUIRenderingStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif