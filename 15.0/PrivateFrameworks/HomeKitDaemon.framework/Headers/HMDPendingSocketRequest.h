// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPENDINGSOCKETREQUEST_H
#define HMDPENDINGSOCKETREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMDPendingSocketRequest : NSObject

@property (readonly) NSString *applicationProtocolName; // ivar: _applicationProtocolName
@property (readonly) id *completion; // ivar: _completion


-(id)initWithApplicationProtocolName:(id)arg0 completion:(id)arg1 ;


@end


#endif