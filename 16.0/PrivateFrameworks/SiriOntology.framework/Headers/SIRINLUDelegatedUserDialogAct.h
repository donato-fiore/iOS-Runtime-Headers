// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUDELEGATEDUSERDIALOGACT_H
#define SIRINLUDELEGATEDUSERDIALOGACT_H

@class NSString, NSArray;
@protocol SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>

#import "SIRINLUReferenceContext.h"
#import "SIRINLURewriteMessage.h"

@interface SIRINLUDelegatedUserDialogAct : NSObject <SIRINLUUserDialogAct>



@property int asrHypothesisIndex; // ivar: _asrHypothesisIndex
@property (retain, nonatomic) NSString *externalParserId; // ivar: _externalParserId
@property (retain, nonatomic) SIRINLUReferenceContext *referenceContext; // ivar: _referenceContext
@property (retain, nonatomic) SIRINLURewriteMessage *rewrite; // ivar: _rewrite
@property (retain, nonatomic) NSArray *rewrites; // ivar: _rewrites
@property (retain, nonatomic) NSString *rewrittenUtterance; // ivar: _rewrittenUtterance
@property (retain, nonatomic) NSArray *spans; // ivar: _spans


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAsrHypothesisIndex:(int)arg0 rewrittenUtterace:(id)arg1 externalParserId:(id)arg2 ;
-(id)initWithAsrHypothesisIndex:(int)arg0 rewrittenUtterace:(id)arg1 externalParserId:(id)arg2 spans:(id)arg3 ;
-(id)initWithAsrHypothesisIndex:(int)arg0 rewrittenUtterace:(id)arg1 externalParserId:(id)arg2 spans:(id)arg3 rewriteMessage:(id)arg4 ;
-(id)initWithAsrHypothesisIndex:(int)arg0 rewrittenUtterace:(id)arg1 externalParserId:(id)arg2 spans:(id)arg3 rewriteMessage:(id)arg4 referenceContext:(id)arg5 ;
-(id)initWithAsrHypothesisIndex:(int)arg0 rewrittenUtterace:(id)arg1 externalParserId:(id)arg2 spans:(id)arg3 rewriteMessages:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif