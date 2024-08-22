// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCINEMATOGRAPHYNETWORKLABELSIGNAL_H
#define PTCINEMATOGRAPHYNETWORKLABELSIGNAL_H

@class NSDictionary;


#import "PTCinematographyNetworkSignal.h"

@interface PTCinematographyNetworkLabelSignal : PTCinematographyNetworkSignal

@property (readonly) NSInteger labelOffset; // ivar: _labelOffset
@property (readonly) NSUInteger labelZero; // ivar: _labelZero
@property (readonly) NSDictionary *remap; // ivar: _remap


-(NSUInteger)_networkLabelForDetection:(id)arg0 ;
-(id)initWithModelDictionary:(id)arg0 ;
-(void)writePayload:(id)arg0 toStream:(id)arg1 ;


@end


#endif