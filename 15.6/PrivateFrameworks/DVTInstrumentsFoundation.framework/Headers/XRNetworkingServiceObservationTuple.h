// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRNETWORKINGSERVICEOBSERVATIONTUPLE_H
#define XRNETWORKINGSERVICEOBSERVATIONTUPLE_H


#import <Foundation/Foundation.h>


@interface XRNetworkingServiceObservationTuple : NSObject {
    *id data;
}


@property (nonatomic) unsigned char count; // ivar: _count
@property (nonatomic) int kind; // ivar: _kind


-(id)initWithKind:(int)arg0 count:(unsigned char)arg1 ;
-(id)initWithKind:(int)arg0 count:(unsigned char)arg1 source:(struct __CFDictionary *)arg2 indexToKeyMap:(struct __CFString ***)arg3 ;
-(void)dealloc;


@end


#endif