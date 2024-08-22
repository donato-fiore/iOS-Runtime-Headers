// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATORBANDWIDTHCONFIGURATION_H
#define VCMEDIANEGOTIATORBANDWIDTHCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorBandwidthConfiguration : NSObject

@property (nonatomic) int connectionType; // ivar: _connectionType
@property (nonatomic) BOOL isDefaultMode; // ivar: _isDefaultMode
@property (nonatomic) unsigned int maxBandwidth; // ivar: _maxBandwidth
@property (nonatomic) int mode; // ivar: _mode


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithConnectionType:(int)arg0 maxBandwidth:(unsigned int)arg1 ;
-(id)initWithMode:(int)arg0 connectionType:(int)arg1 maxBandwidth:(unsigned int)arg2 ;


@end


#endif