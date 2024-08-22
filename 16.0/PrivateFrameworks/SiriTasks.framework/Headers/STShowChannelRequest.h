// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHOWCHANNELREQUEST_H
#define STSHOWCHANNELREQUEST_H

@class AFSiriRequest;


#import "STMediaChannel.h"

@interface STShowChannelRequest : AFSiriRequest

@property (readonly, nonatomic) STMediaChannel *channel; // ivar: _channel


+(BOOL)supportsSecureCoding;
-(id)_initWithChannel:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif