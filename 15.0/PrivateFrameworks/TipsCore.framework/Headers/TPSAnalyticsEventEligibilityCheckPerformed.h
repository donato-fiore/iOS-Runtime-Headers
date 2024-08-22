// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSANALYTICSEVENTELIGIBILITYCHECKPERFORMED_H
#define TPSANALYTICSEVENTELIGIBILITYCHECKPERFORMED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventEligibilityCheckPerformed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *error; // ivar: _error


+(BOOL)supportsSecureCoding;
+(id)eventWithError:(id)arg0 ;
-(id)_initWithError:(id)arg0 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif