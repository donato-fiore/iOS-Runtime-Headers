// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAPTUREDSYSTEMSTATE_H
#define CAPTUREDSYSTEMSTATE_H


#import <Foundation/Foundation.h>


@interface CapturedSystemState : NSObject

@property (nonatomic) NSInteger cellularBandwidth; // ivar: _cellularBandwidth
@property (readonly, nonatomic) BOOL cellularExpensive;
@property (nonatomic) int cellularNRFrequencyBand; // ivar: _cellularNRFrequencyBand
@property (nonatomic) int cellularRAT; // ivar: _cellularRAT
@property (nonatomic) int cellularRSRP; // ivar: _cellularRSRP
@property (readonly, nonatomic) BOOL cellularWRMExpensive;
@property (nonatomic) unsigned int cosmState; // ivar: _cosmState
@property (nonatomic) int outrankNumFGAppsExploiting; // ivar: _outrankNumFGAppsExploiting
@property (nonatomic) int outrankNumFGAppsNonExploiting; // ivar: _outrankNumFGAppsNonExploiting
@property (nonatomic) int outrankNumIconOnTransitions; // ivar: _outrankNumIconOnTransitions
@property (nonatomic) int outrankPercentFGExploited; // ivar: _outrankPercentFGExploited
@property (nonatomic) int outrankPercentFGNonExploited; // ivar: _outrankPercentFGNonExploited
@property (nonatomic) int outrankPercentIconShown; // ivar: _outrankPercentIconShown
@property (nonatomic) NSUInteger reasonFlags; // ivar: _reasonFlags
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) int wifiRAT; // ivar: _wifiRAT
@property (nonatomic) int wifiRSSI; // ivar: _wifiRSSI
@property (readonly, nonatomic) BOOL wifiSecure;
@property (nonatomic) NSUInteger wrmStatus; // ivar: _wrmStatus




@end


#endif