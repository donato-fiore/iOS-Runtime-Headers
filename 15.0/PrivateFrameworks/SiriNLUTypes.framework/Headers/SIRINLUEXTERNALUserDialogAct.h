// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUEXTERNALUSERDIALOGACT_H
#define SIRINLUEXTERNALUSERDIALOGACT_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUEXTERNALUserAccepted.h"
#import "SIRINLUEXTERNALUserAcknowledged.h"
#import "SIRINLUEXTERNALUtteranceAlignment.h"
#import "SIRINLUEXTERNALUserCancelled.h"
#import "SIRINLUEXTERNALDelegatedUserDialogAct.h"
#import "SIRINLUEXTERNALUserRejected.h"
#import "SIRINLUEXTERNALUserStatedTask.h"
#import "SIRINLUEXTERNALUserWantedToPause.h"
#import "SIRINLUEXTERNALUserWantedToProceed.h"
#import "SIRINLUEXTERNALUserWantedToRepeat.h"

@interface SIRINLUEXTERNALUserDialogAct : PBCodable <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALUserAccepted *accepted; // ivar: _accepted
@property (retain, nonatomic) SIRINLUEXTERNALUserAcknowledged *acknowledged; // ivar: _acknowledged
@property (retain, nonatomic) SIRINLUEXTERNALUtteranceAlignment *alignment; // ivar: _alignment
@property (retain, nonatomic) SIRINLUEXTERNALUserCancelled *cancelled; // ivar: _cancelled
@property (retain, nonatomic) SIRINLUEXTERNALDelegatedUserDialogAct *delegated; // ivar: _delegated
@property (readonly, nonatomic) BOOL hasAccepted;
@property (readonly, nonatomic) BOOL hasAcknowledged;
@property (readonly, nonatomic) BOOL hasAlignment;
@property (readonly, nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) BOOL hasDelegated;
@property (readonly, nonatomic) BOOL hasRejected;
@property (readonly, nonatomic) BOOL hasUserStatedTask;
@property (readonly, nonatomic) BOOL hasWantedToPause;
@property (readonly, nonatomic) BOOL hasWantedToProceed;
@property (readonly, nonatomic) BOOL hasWantedToRepeat;
@property (retain, nonatomic) SIRINLUEXTERNALUserRejected *rejected; // ivar: _rejected
@property (retain, nonatomic) SIRINLUEXTERNALUserStatedTask *userStatedTask; // ivar: _userStatedTask
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToPause *wantedToPause; // ivar: _wantedToPause
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToProceed *wantedToProceed; // ivar: _wantedToProceed
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToRepeat *wantedToRepeat; // ivar: _wantedToRepeat


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif