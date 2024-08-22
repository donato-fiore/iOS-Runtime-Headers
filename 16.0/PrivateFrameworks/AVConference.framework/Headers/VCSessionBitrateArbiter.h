// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSESSIONBITRATEARBITER_H
#define VCSESSIONBITRATEARBITER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VCSessionBitrateArbiter : NSObject {
    NSDictionary *_currentSettings;
}


@property (readonly) unsigned int maxBitrate2GDownlink; // ivar: _maxBitrate2GDownlink
@property (readonly) unsigned int maxBitrate2GUplink; // ivar: _maxBitrate2GUplink
@property (readonly) unsigned int maxBitrate3GDownlink; // ivar: _maxBitrate3GDownlink
@property (readonly) unsigned int maxBitrate3GUplink; // ivar: _maxBitrate3GUplink
@property (readonly) unsigned int maxBitrateExpensiveDownlink; // ivar: _maxBitrateExpensiveDownlink
@property (readonly) unsigned int maxBitrateExpensiveUplink; // ivar: _maxBitrateExpensiveUplink
@property (readonly) unsigned int maxBitrateNonExpensiveDownlink; // ivar: _maxBitrateNonExpensiveDownlink
@property (readonly) unsigned int maxBitrateNonExpensiveUplink; // ivar: _maxBitrateNonExpensiveUplink
@property (readonly) unsigned int maxBitrateWiFiDownlink; // ivar: _maxBitrateWiFiDownlink
@property (readonly) unsigned int maxBitrateWiFiUplink; // ivar: _maxBitrateWiFiUplink


-(BOOL)rangeCheck:(unsigned int)arg0 ;
-(id)init;
-(unsigned int)bitrateForStoreBagKey:(id)arg0 connectionType:(int)arg1 currentBitrate:(unsigned int)arg2 isExpensive:(BOOL)arg3 ;
-(void)dealloc;
-(void)readHardwareValues;
-(void)readStoreBagValues;


@end


#endif