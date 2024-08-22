// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNLPRRULEMATCHER_H
#define MNLPRRULEMATCHER_H

@class GEOLPRVehicle, NSArray, NSDate, NSTimeZone, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_MNLPRPlate.h"

@interface MNLPRRuleMatcher : NSObject {
    GEOLPRVehicle *_vehicle;
    NSArray *_ruleSets;
    NSUInteger _signpost;
    _MNLPRPlate *_lastPlate;
    NSDate *_lastDate;
    NSTimeZone *_lastTimeZone;
    NSDictionary *_usedRegions;
    NSMutableDictionary *_usedRegionETAs;
}




-(id)debug_jsonDescriptionOfLastPlate;
-(id)generateMaskedPlateForWaypoints:(id)arg0 date:(id)arg1 timeZone:(id)arg2 error:(*id)arg3 ;
-(id)initForVehicle:(id)arg0 withRules:(id)arg1 ;


@end


#endif