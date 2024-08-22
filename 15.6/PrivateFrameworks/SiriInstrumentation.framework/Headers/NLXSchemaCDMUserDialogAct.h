// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMUSERDIALOGACT_H
#define NLXSCHEMACDMUSERDIALOGACT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMUserAccepted.h"
#import "NLXSchemaCDMUserAcknowledged.h"
#import "USOSchemaUSOUtteranceAlignment.h"
#import "NLXSchemaCDMUserCancelled.h"
#import "NLXSchemaCDMDelegatedUserDialogAct.h"
#import "USOSchemaUSOGraph.h"
#import "NLXSchemaCDMUserRejected.h"
#import "NLXSchemaCDMUserStatedTask.h"
#import "NLXSchemaCDMUserWantedToPause.h"
#import "NLXSchemaCDMUserWantedToProceed.h"
#import "NLXSchemaCDMUserWantedToRepeat.h"

@interface NLXSchemaCDMUserDialogAct : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMUserAccepted *accepted; // ivar: _accepted
@property (retain, nonatomic) NLXSchemaCDMUserAcknowledged *acknowledged; // ivar: _acknowledged
@property (retain, nonatomic) USOSchemaUSOUtteranceAlignment *alignment; // ivar: _alignment
@property (retain, nonatomic) NLXSchemaCDMUserCancelled *cancelled; // ivar: _cancelled
@property (retain, nonatomic) NLXSchemaCDMDelegatedUserDialogAct *delegated; // ivar: _delegated
@property (nonatomic) BOOL hasAccepted; // ivar: _hasAccepted
@property (nonatomic) BOOL hasAcknowledged; // ivar: _hasAcknowledged
@property (nonatomic) BOOL hasAlignment; // ivar: _hasAlignment
@property (nonatomic) BOOL hasCancelled; // ivar: _hasCancelled
@property (nonatomic) BOOL hasDelegated; // ivar: _hasDelegated
@property (nonatomic) BOOL hasReference; // ivar: _hasReference
@property (nonatomic) BOOL hasRejected; // ivar: _hasRejected
@property (nonatomic) BOOL hasUserStatedTask; // ivar: _hasUserStatedTask
@property (nonatomic) BOOL hasWantedToPause; // ivar: _hasWantedToPause
@property (nonatomic) BOOL hasWantedToProceed; // ivar: _hasWantedToProceed
@property (nonatomic) BOOL hasWantedToRepeat; // ivar: _hasWantedToRepeat
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USOSchemaUSOGraph *reference; // ivar: _reference
@property (retain, nonatomic) NLXSchemaCDMUserRejected *rejected; // ivar: _rejected
@property (retain, nonatomic) NLXSchemaCDMUserStatedTask *userStatedTask; // ivar: _userStatedTask
@property (retain, nonatomic) NLXSchemaCDMUserWantedToPause *wantedToPause; // ivar: _wantedToPause
@property (retain, nonatomic) NLXSchemaCDMUserWantedToProceed *wantedToProceed; // ivar: _wantedToProceed
@property (retain, nonatomic) NLXSchemaCDMUserWantedToRepeat *wantedToRepeat; // ivar: _wantedToRepeat
@property (readonly, nonatomic) NSUInteger whichUserdialogacttype; // ivar: _whichUserdialogacttype


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAccepted;
-(void)deleteAcknowledged;
-(void)deleteAlignment;
-(void)deleteCancelled;
-(void)deleteDelegated;
-(void)deleteReference;
-(void)deleteRejected;
-(void)deleteUserStatedTask;
-(void)deleteWantedToPause;
-(void)deleteWantedToProceed;
-(void)deleteWantedToRepeat;
-(void)writeTo:(id)arg0 ;


@end


#endif