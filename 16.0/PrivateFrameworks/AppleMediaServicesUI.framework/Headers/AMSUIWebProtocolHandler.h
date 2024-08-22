// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBPROTOCOLHANDLER_H
#define AMSUIWEBPROTOCOLHANDLER_H

@class AMSURLProtocolHandler;
@protocol AMSUIWebProtocolDelegate;



@interface AMSUIWebProtocolHandler : AMSURLProtocolHandler

@property (weak, nonatomic) NSObject<AMSUIWebProtocolDelegate> *delegate; // ivar: _delegate


-(void)reconfigureNewRequest:(id)arg0 originalTask:(id)arg1 redirect:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif