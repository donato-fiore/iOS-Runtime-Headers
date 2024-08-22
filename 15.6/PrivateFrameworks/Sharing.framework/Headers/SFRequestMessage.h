// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFREQUESTMESSAGE_H
#define SFREQUESTMESSAGE_H



#import "SFMessage.h"

@interface SFRequestMessage : SFMessage

@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)invalidate;


@end


#endif