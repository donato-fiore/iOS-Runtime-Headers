// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSPANMATCHPROTOREQUESTCOMMAND_H
#define CDMSPANMATCHPROTOREQUESTCOMMAND_H

@class NSArray, NLXSchemaNLXClientEventMetadata;


#import "CDMBaseCommand.h"

@interface CDMSpanMatchProtoRequestCommand : CDMBaseCommand

@property (retain, nonatomic) NSArray *asrHypothesis; // ivar: _asrHypothesis
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata; // ivar: _selfMetadata
@property (retain, nonatomic) NSArray *spanMatchRequests; // ivar: _spanMatchRequests


-(id)commandName;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequests:(id)arg0 ;
-(id)initWithRequests:(id)arg0 asrHypothesis:(id)arg1 ;
-(id)initWithRequests:(id)arg0 asrHypothesis:(id)arg1 selfMetadata:(id)arg2 ;
-(id)initWithRequests:(id)arg0 selfMetadata:(id)arg1 ;


@end


#endif