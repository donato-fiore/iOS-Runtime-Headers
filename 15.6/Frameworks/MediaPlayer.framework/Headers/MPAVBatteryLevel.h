// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVBATTERYLEVEL_H
#define MPAVBATTERYLEVEL_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MPAVBatteryLevel : NSObject

@property (readonly, nonatomic) NSNumber *casePercentage; // ivar: _casePercentage
@property (readonly, nonatomic) NSNumber *leftPercentage; // ivar: _leftPercentage
@property (readonly, nonatomic) NSNumber *rightPercentage; // ivar: _rightPercentage
@property (readonly, nonatomic) NSNumber *singlePercentage; // ivar: _singlePercentage


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithOutputDevice:(*void)arg0 ;
-(id)initWithRouteDescription:(id)arg0 ;


@end


#endif