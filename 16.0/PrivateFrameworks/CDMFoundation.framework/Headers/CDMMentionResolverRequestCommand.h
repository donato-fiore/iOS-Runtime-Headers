// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMMENTIONRESOLVERREQUESTCOMMAND_H
#define CDMMENTIONRESOLVERREQUESTCOMMAND_H

@class SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest;


#import "CDMBaseCommand.h"

@interface CDMMentionResolverRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest *mrRequest; // ivar: _mrRequest


-(id)commandName;
-(id)description;
-(id)initWithMRRequest:(id)arg0 ;


@end


#endif