// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMISIMPLEENGAGEMENTSTATS_H
#define SGMISIMPLEENGAGEMENTSTATS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface SGMISimpleEngagementStats : NSObject

@property (readonly, nonatomic) NSNumber *negativeEngagement; // ivar: _negativeEngagement
@property (readonly, nonatomic) NSNumber *noEngagement; // ivar: _noEngagement
@property (readonly, nonatomic) NSNumber *positiveEngagement; // ivar: _positiveEngagement


-(id)initWithPositiveEngagement:(id)arg0 noEngagement:(id)arg1 negativeEngagement:(id)arg2 ;


@end


#endif