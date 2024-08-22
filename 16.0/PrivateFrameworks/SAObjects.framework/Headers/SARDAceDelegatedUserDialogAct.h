// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SARDACEDELEGATEDUSERDIALOGACT_H
#define SARDACEDELEGATEDUSERDIALOGACT_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SARDAceRewriteMessage.h"

@interface SARDAceDelegatedUserDialogAct : AceObject <SAAceSerializable>



@property (nonatomic) NSInteger asrHypothesisIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *externalParserId;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SARDAceRewriteMessage *rewriteMessage;
@property (copy, nonatomic) NSString *rewrittenUtterance;
@property (readonly) Class superclass;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif