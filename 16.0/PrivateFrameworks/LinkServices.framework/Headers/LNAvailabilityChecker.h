// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNAVAILABILITYCHECKER_H
#define LNAVAILABILITYCHECKER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface LNAvailabilityChecker : NSObject

@property (readonly, nonatomic) NSDictionary *availabilityAnnotations; // ivar: _availabilityAnnotations


-(id)availabilityWithPlatform:(id)arg0 platformVersion:(id)arg1 ;
-(id)initWithAvailabilityAnnotations:(id)arg0 ;


@end


#endif