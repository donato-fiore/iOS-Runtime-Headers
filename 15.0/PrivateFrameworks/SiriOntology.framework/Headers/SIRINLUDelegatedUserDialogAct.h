// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUDELEGATEDUSERDIALOGACT_H
#define SIRINLUDELEGATEDUSERDIALOGACT_H

@class NSString;
@protocol SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>


@interface SIRINLUDelegatedUserDialogAct : NSObject <SIRINLUUserDialogAct>



@property int asrHypothesisIndex; // ivar: _asrHypothesisIndex
@property (retain, nonatomic) NSString *externalParserId; // ivar: _externalParserId
@property (retain, nonatomic) NSString *rewrittenUtterance; // ivar: _rewrittenUtterance


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAsrHypothesisIndex:(int)arg0 rewrittenUtterace:(id)arg1 externalParserId:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif