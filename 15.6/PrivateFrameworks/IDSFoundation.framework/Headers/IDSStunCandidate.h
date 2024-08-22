// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSTUNCANDIDATE_H
#define IDSSTUNCANDIDATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IDSStunCandidate : NSObject {
    sockaddr_storage _address;
    sockaddr_storage _external;
    ? _prefix;
    unsigned int _dataSoMasks;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) *sockaddr address;
@property (copy, nonatomic) NSString *allocbindDataBlob; // ivar: _allocbindDataBlob
@property (nonatomic) unsigned int dataSoMask; // ivar: _dataSoMask
@property (nonatomic) CGFloat extIPDetectionStartTime; // ivar: _extIPDetectionStartTime
@property (nonatomic) *sockaddr external;
@property (readonly, nonatomic) int index; // ivar: _index
@property (nonatomic) unsigned short linkFlags; // ivar: _linkFlags
@property (nonatomic) unsigned int mtu; // ivar: _mtu
@property (nonatomic) *? prefix;
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (nonatomic) unsigned int radioAccessTechnology; // ivar: _radioAccessTechnology
@property (readonly, nonatomic) NSInteger transport; // ivar: _transport
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)candidateWithType:(NSUInteger)arg0 transport:(NSInteger)arg1 radioAccessTechnology:(unsigned int)arg2 mtu:(unsigned int)arg3 index:(int)arg4 address:(struct sockaddr *)arg5 external:(struct sockaddr *)arg6 ;
-(BOOL)hasNATIPv4Address;
-(BOOL)hasNATIPv4External;
-(BOOL)isCellularStunCandidate;
-(BOOL)isCompatibleWithStunCandidate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLinkLocalStunCandidate;
-(BOOL)isRelayStunCandidate;
-(BOOL)isSameNetworkType:(id)arg0 ;
-(BOOL)isServerReflexiveStunCandidate;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 transport:(NSInteger)arg1 radioAccessTechnology:(unsigned int)arg2 mtu:(unsigned int)arg3 index:(int)arg4 address:(struct sockaddr *)arg5 external:(struct sockaddr *)arg6 ;
-(void)dealloc;
-(void)updateTransport:(NSInteger)arg0 ;


@end


#endif