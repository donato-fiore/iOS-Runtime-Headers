// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REAUDIOGROUPPAYLOAD_H
#define REAUDIOGROUPPAYLOAD_H

@class NSArray;
@protocol OS_xpc_object;


#import "RESharedResourcePayload.h"

@interface REAudioGroupPayload : RESharedResourcePayload {
    NSObject<OS_xpc_object> *_buffer;
}


@property (readonly, nonatomic) NSArray *payloads; // ivar: _payloads


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayloads:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif