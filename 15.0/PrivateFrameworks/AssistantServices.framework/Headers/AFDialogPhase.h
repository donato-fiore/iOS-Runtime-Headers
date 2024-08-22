// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFDIALOGPHASE_H
#define AFDIALOGPHASE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFDialogPhase : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *aceDialogPhaseValue;
@property (readonly, nonatomic, getter=isAcknowledgementDialogPhase) BOOL acknowledgementDialogPhase;
@property (readonly, nonatomic, getter=isCancelledDialogPhase) BOOL cancelledDialogPhase;
@property (readonly, nonatomic, getter=isClarificationDialogPhase) BOOL clarificationDialogPhase;
@property (readonly, nonatomic, getter=isCompletionDialogPhase) BOOL completionDialogPhase;
@property (readonly, nonatomic, getter=isConfirmationDialogPhase) BOOL confirmationDialogPhase;
@property (readonly, nonatomic, getter=isConfirmedDialogPhase) BOOL confirmedDialogPhase;
@property (readonly, nonatomic, getter=isErrorDialogPhase) BOOL errorDialogPhase;
@property (readonly, nonatomic, getter=isExpository) BOOL expository;
@property (readonly, nonatomic, getter=isReflectionDialogPhase) BOOL reflectionDialogPhase;
@property (readonly, nonatomic, getter=isSummaryDialogPhase) BOOL summaryDialogPhase;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic, getter=_type) NSInteger type; // ivar: _type
@property (readonly, nonatomic, getter=isUserRequestDialogPhase) BOOL userRequestDialogPhase;


+(BOOL)supportsSecureCoding;
+(id)_dialogPhaseWithType:(NSInteger)arg0 ;
+(id)acknowledgementDialogPhase;
+(id)cancelledDialogPhase;
+(id)clarificationDialogPhase;
+(id)completionDialogPhase;
+(id)confirmationDialogPhase;
+(id)confirmedDialogPhase;
+(id)dialogPhaseForAceDialogPhase:(id)arg0 ;
+(id)errorDialogPhase;
+(id)reflectionDialogPhase;
+(id)statusDialogPhase;
+(id)summaryDialogPhase;
+(id)userRequestDialogPhase;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDialogPhase:(id)arg0 ;
-(BOOL)isPossiblyPartOfMultiTurnRequest;
-(BOOL)replacesPreviousSnippetContents;
-(NSUInteger)hash;
-(id)_initWithType:(NSInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif