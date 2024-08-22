// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LRRCDMREPLAYREQUESTRESULT_H
#define LRRCDMREPLAYREQUESTRESULT_H

@class SIRINLUEXTERNALCDMNluRequest, SIRINLUEXTERNALCDMNluResponse;

#import <Foundation/Foundation.h>


@interface LRRCDMReplayRequestResult : NSObject

@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *request; // ivar: _request
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *responseReplay; // ivar: _responseReplay


-(id)initWithReplayResult:(id)arg0 responseReplay:(id)arg1 ;


@end


#endif