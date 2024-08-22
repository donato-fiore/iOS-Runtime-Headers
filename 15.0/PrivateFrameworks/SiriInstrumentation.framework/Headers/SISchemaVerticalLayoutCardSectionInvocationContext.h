// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAVERTICALLAYOUTCARDSECTIONINVOCATIONCONTEXT_H
#define SISCHEMAVERTICALLAYOUTCARDSECTIONINVOCATIONCONTEXT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaVerticalLayoutCardSectionInvocationContext : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasResultIdentifier; // ivar: _hasResultIdentifier
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif