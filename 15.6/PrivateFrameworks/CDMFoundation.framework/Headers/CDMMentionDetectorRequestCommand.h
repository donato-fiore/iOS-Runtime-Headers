// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMMENTIONDETECTORREQUESTCOMMAND_H
#define CDMMENTIONDETECTORREQUESTCOMMAND_H

@class SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest;


#import "CDMBaseCommand.h"

@interface CDMMentionDetectorRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest *mdRequest; // ivar: _mdRequest


-(id)commandName;
-(id)initWithMDRequest:(id)arg0 ;


@end


#endif