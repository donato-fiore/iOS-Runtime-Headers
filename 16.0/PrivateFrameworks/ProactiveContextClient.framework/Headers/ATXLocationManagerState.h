// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCATIONMANAGERSTATE_H
#define ATXLOCATIONMANAGERSTATE_H

@class CLLocation, NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXLocationOfInterest.h"
#import "ATXLocationManagerKnownLOIs.h"

@interface ATXLocationManagerState : NSObject <NSSecureCoding>



@property (retain, nonatomic) ATXLocationOfInterest *currentLOI; // ivar: _currentLOI
@property (readonly, nonatomic) CLLocation *gymLOI;
@property (readonly, nonatomic) CLLocation *homeLOI;
@property (retain, nonatomic) NSDate *lastUpdateDate; // ivar: _lastUpdateDate
@property (readonly, nonatomic) ATXLocationManagerKnownLOIs *locationsOfInterest; // ivar: _locationsOfInterest
@property (retain, nonatomic) NSArray *predictedExitTimes; // ivar: _predictedExitTimes
@property (retain, nonatomic) NSArray *predictedNextLOIs; // ivar: _predictedNextLOIs
@property (retain, nonatomic) ATXLocationOfInterest *previousLOI; // ivar: _previousLOI
@property (readonly, nonatomic) CLLocation *schoolLOI;
@property (readonly, nonatomic) CLLocation *workLOI;


+(BOOL)supportsSecureCoding;
+(id)merge:(id)arg0 with:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)expirePreviousLOIBefore:(id)arg0 ;


@end


#endif