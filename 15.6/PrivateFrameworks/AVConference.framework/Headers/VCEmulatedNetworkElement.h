// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCEMULATEDNETWORKELEMENT_H
#define VCEMULATEDNETWORKELEMENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VCEmulatedNetworkElement : NSObject {
    NSDictionary *_policies;
    *opaqueCMSimpleQueue _networkElementQueue;
}


@property (copy, nonatomic) id *processCompleteHandler; // ivar: _processCompleteHandler


-(id)initWithPolicies:(id)arg0 ;
-(int)write:(id)arg0 ;
-(void)connectFrom:(id)arg0 ;
-(void)connectTo:(id)arg0 ;
-(void)dealloc;
-(void)drainAndReleasePackets;
-(void)runUntilTime:(CGFloat)arg0 ;


@end


#endif