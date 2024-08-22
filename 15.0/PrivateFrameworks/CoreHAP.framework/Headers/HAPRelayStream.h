// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPRELAYSTREAM_H
#define HAPRELAYSTREAM_H

@class HMFObject;
@protocol HAPStreamDelegate;



@interface HAPRelayStream : HMFObject

@property (weak) NSObject<HAPStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger mtu; // ivar: _mtu


-(id)writeData:(id)arg0 error:(*id)arg1 ;
-(void)close;
-(void)open;


@end


#endif