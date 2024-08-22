// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCDIALREQUEST_H
#define TCDIALREQUEST_H

@class TUDialRequest;



@interface TCDialRequest : TUDialRequest

@property (nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted; // ivar: _remoteUplinkMuted
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)URL;
-(id)initWithURL:(id)arg0 ;


@end


#endif