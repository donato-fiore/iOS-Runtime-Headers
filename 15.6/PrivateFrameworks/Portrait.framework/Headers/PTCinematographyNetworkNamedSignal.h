// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCINEMATOGRAPHYNETWORKNAMEDSIGNAL_H
#define PTCINEMATOGRAPHYNETWORKNAMEDSIGNAL_H



#import "PTCinematographyNetworkSignal.h"

@interface PTCinematographyNetworkNamedSignal : PTCinematographyNetworkSignal

@property (readonly) BOOL flatten; // ivar: _flatten


-(id)_flattenArray:(id)arg0 ;
-(id)initWithModelDictionary:(id)arg0 ;
-(void)_flattenArray:(id)arg0 toMutableArray:(id)arg1 ;
-(void)writePayload:(id)arg0 toStream:(id)arg1 ;


@end


#endif