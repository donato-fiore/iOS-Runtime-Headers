// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSCORABLETIMEDNDMODEWRAPPER_H
#define ATXSCORABLETIMEDNDMODEWRAPPER_H

@class NSString, DNDMode;
@protocol ATXScorableTimePeriodProtocol;

#import <Foundation/Foundation.h>


@interface ATXScorableTimeDNDModeWrapper : NSObject <ATXScorableTimePeriodProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DNDMode *dndMode; // ivar: _dndMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *legacyScorableTimeIdentifier;
@property (readonly, nonatomic) NSString *scorableTimeIdentifier;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDNDMode:(id)arg0 ;


@end


#endif