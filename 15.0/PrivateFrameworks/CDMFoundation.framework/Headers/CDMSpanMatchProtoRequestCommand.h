// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSPANMATCHPROTOREQUESTCOMMAND_H
#define CDMSPANMATCHPROTOREQUESTCOMMAND_H

@class NSArray;


#import "CDMBaseCommand.h"

@interface CDMSpanMatchProtoRequestCommand : CDMBaseCommand

@property (retain, nonatomic) NSArray *asrHypothesis; // ivar: _asrHypothesis
@property (retain, nonatomic) NSArray *spanMatchRequests; // ivar: _spanMatchRequests


-(id)commandName;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequests:(id)arg0 ;
-(id)initWithRequests:(id)arg0 asrHypothesis:(id)arg1 ;


@end


#endif