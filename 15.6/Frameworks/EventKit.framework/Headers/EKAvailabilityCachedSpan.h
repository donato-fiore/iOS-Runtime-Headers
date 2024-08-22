// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKAVAILABILITYCACHEDSPAN_H
#define EKAVAILABILITYCACHEDSPAN_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "EKAvailabilitySpan.h"

@interface EKAvailabilityCachedSpan : NSObject

@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) EKAvailabilitySpan *span; // ivar: _span


-(id)description;
-(id)initWithSpan:(id)arg0 ;


@end


#endif