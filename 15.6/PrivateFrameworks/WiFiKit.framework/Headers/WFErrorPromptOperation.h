// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFERRORPROMPTOPERATION_H
#define WFERRORPROMPTOPERATION_H

@protocol WFNetworkView, WFErrorProviderContext;


#import "WFUserPromptOperation.h"

@interface WFErrorPromptOperation : WFUserPromptOperation <WFNetworkView>



@property (retain, nonatomic) NSObject<WFErrorProviderContext> *context; // ivar: _context
@property (readonly, nonatomic) BOOL wantsModalPresentation;


+(id)errorPromptOperationWithContext:(id)arg0 ;


@end


#endif