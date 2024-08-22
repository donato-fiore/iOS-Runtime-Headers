// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAVIEWCONTAINER_H
#define SISCHEMAVIEWCONTAINER_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaViewContainer : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *dialogIdentifier; // ivar: _dialogIdentifier
@property (copy, nonatomic) NSString *dialogPhase; // ivar: _dialogPhase
@property (nonatomic) BOOL hasDialogIdentifier; // ivar: _hasDialogIdentifier
@property (nonatomic) BOOL hasDialogPhase; // ivar: _hasDialogPhase
@property (nonatomic) BOOL hasSnippetClass; // ivar: _hasSnippetClass
@property (nonatomic) BOOL hasViewID; // ivar: _hasViewID
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *snippetClass; // ivar: _snippetClass
@property (copy, nonatomic) NSString *viewID; // ivar: _viewID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDialogIdentifier;
-(void)deleteDialogPhase;
-(void)deleteSnippetClass;
-(void)deleteViewID;
-(void)writeTo:(id)arg0 ;


@end


#endif