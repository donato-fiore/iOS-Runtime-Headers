// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMINIMALACTIONPARAMETERS_H
#define ATXMINIMALACTIONPARAMETERS_H

@class NSDate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ATXMinimalSlotResolutionParameters.h"

@interface ATXMinimalActionParameters : NSObject <NSCopying>



@property (retain, nonatomic) NSDate *actionTime; // ivar: _actionTime
@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) ATXMinimalSlotResolutionParameters *minimalSlotResolutionParams; // ivar: _minimalSlotResolutionParams


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getContainerWithScore:(float)arg0 ;
-(id)init;
-(id)initWithMinimalSlotResolutionParameters:(id)arg0 actionTime:(id)arg1 bundleId:(id)arg2 actionType:(id)arg3 ;


@end


#endif