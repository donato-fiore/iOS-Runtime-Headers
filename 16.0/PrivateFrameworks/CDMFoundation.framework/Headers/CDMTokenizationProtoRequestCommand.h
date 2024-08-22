// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMTOKENIZATIONPROTOREQUESTCOMMAND_H
#define CDMTOKENIZATIONPROTOREQUESTCOMMAND_H

@class NSArray;


#import "CDMBaseCommand.h"

@interface CDMTokenizationProtoRequestCommand : CDMBaseCommand

@property (retain, nonatomic) NSArray *requests; // ivar: _requests


-(id)commandName;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequests:(id)arg0 ;


@end


#endif