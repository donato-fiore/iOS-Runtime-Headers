// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPKEYINDEXMAP_H
#define SPKEYINDEXMAP_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface SPKeyIndexMap : NSObject

@property (readonly) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (readonly) *? mapHandle; // ivar: _mapHandle
@property (readonly) unsigned char sequence; // ivar: _sequence


-(id)headerString;
-(id)init;
-(id)initWithBeaconIdentifier:(id)arg0 keySequence:(unsigned char)arg1 mapHandle:(struct ? *)arg2 ;
-(void)dealloc;


@end


#endif