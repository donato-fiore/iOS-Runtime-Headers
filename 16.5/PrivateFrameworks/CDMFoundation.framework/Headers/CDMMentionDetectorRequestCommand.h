// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMMENTIONDETECTORREQUESTCOMMAND_H
#define CDMMENTIONDETECTORREQUESTCOMMAND_H

@class SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest, SIRINLUEXTERNALTurnInput;


#import "CDMBaseCommand.h"

@interface CDMMentionDetectorRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest *mdRequest; // ivar: _mdRequest
@property (readonly, nonatomic) SIRINLUEXTERNALTurnInput *turnInput; // ivar: _turnInput


-(id)description;
-(id)initWithMDRequest:(id)arg0 withCurrTurn:(id)arg1 ;


@end


#endif