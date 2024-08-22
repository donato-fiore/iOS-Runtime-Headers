// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPREDICTEDLOCATIONOFINTEREST_H
#define EKPREDICTEDLOCATIONOFINTEREST_H

@class NSString, RTPredictedLocationOfInterest;

#import <Foundation/Foundation.h>


@interface EKPredictedLocationOfInterest : NSObject

@property (readonly, copy, nonatomic) NSString *addressCountryCode; // ivar: _addressCountryCode
@property (readonly, copy, nonatomic) NSString *addressLocality; // ivar: _addressLocality
@property (readonly, copy, nonatomic) NSString *addressThoroughfare; // ivar: _addressThoroughfare
@property (readonly, copy, nonatomic) NSString *customLabel; // ivar: _customLabel
@property (readonly, copy, nonatomic) NSString *mapItemName; // ivar: _mapItemName
@property (readonly, nonatomic) RTPredictedLocationOfInterest *rtPredictedLocationOfInterest; // ivar: _rtPredictedLocationOfInterest
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithPredictedLocationOfInterest:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 customLabel:(id)arg1 mapItemName:(id)arg2 addressCountryCode:(id)arg3 addressThoroughFare:(id)arg4 addressLocality:(id)arg5 ;


@end


#endif