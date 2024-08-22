// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REVIDEOREQUESTOPTIONS_H
#define REVIDEOREQUESTOPTIONS_H

@protocol OS_xpc_object;


#import "REResourceRequestOptions.h"

@interface REVideoRequestOptions : REResourceRequestOptions

@property (readonly, nonatomic) NSObject<OS_xpc_object> *receiverEndpoint; // ivar: _receiverEndpoint


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReceiverEndpoint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif