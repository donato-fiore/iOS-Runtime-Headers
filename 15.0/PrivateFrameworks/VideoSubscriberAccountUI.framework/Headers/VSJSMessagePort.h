// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSJSMESSAGEPORT_H
#define VSJSMESSAGEPORT_H

@class IKJSObject;
@protocol VSJSMessagePort, VSJSMessagePortDelegate;



@interface VSJSMessagePort : IKJSObject <VSJSMessagePort>



@property (weak, nonatomic) NSObject<VSJSMessagePortDelegate> *delegate; // ivar: _delegate


-(void)postMessage:(id)arg0 ;


@end


#endif