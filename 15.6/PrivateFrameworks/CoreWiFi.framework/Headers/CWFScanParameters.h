// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFSCANPARAMETERS_H
#define CWFSCANPARAMETERS_H

@class NSArray, NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFScanParameters : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *ANQPElementIDListForPasspointScanResults; // ivar: _ANQPElementIDListForPasspointScanResults
@property (nonatomic) int BSSType; // ivar: _BSSType
@property (nonatomic) int PHYMode; // ivar: _PHYMode
@property (copy, nonatomic) NSString *SSID; // ivar: _SSID
@property (copy, nonatomic) NSArray *SSIDList; // ivar: _SSIDList
@property (nonatomic) BOOL cacheOnly; // ivar: _cacheOnly
@property (copy, nonatomic) NSArray *channels; // ivar: _channels
@property (nonatomic) NSUInteger dwellTime; // ivar: _dwellTime
@property (nonatomic) BOOL includeHiddenNetworks; // ivar: _includeHiddenNetworks
@property (nonatomic) BOOL includeMatchingKnownNetworkProfiles; // ivar: _includeMatchingKnownNetworkProfiles
@property (copy, nonatomic) NSSet *includeProperties; // ivar: _includeProperties
@property (copy, nonatomic) NSArray *includeScanResults; // ivar: _includeScanResults
@property (nonatomic) NSUInteger maximumANQPCacheAgeForPasspointScanResults; // ivar: _maximumANQPCacheAgeForPasspointScanResults
@property (nonatomic) NSUInteger maximumAge; // ivar: _maximumAge
@property (nonatomic) NSUInteger maximumCacheAge; // ivar: _maximumCacheAge
@property (nonatomic) BOOL mergeScanResults; // ivar: _mergeScanResults
@property (nonatomic) NSInteger minimumRSSI; // ivar: _minimumRSSI
@property (nonatomic) NSUInteger numberOfScans; // ivar: _numberOfScans
@property (nonatomic) NSUInteger restTime; // ivar: _restTime
@property (nonatomic) int scanFlags; // ivar: _scanFlags
@property (nonatomic) int scanType; // ivar: _scanType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScanParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif