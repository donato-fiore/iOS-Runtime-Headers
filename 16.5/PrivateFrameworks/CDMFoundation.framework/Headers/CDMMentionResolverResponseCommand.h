// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMMENTIONRESOLVERRESPONSECOMMAND_H
#define CDMMENTIONRESOLVERRESPONSECOMMAND_H

@class SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse;


#import "CDMBaseCommand.h"

@interface CDMMentionResolverResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse *response; // ivar: _response


-(id)initWithMentions:(id)arg0 ;
-(id)initWithResponse:(id)arg0 ;


@end


#endif