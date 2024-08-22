// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDTOUCHROUTINGPOLICY_H
#define BKSHIDTOUCHROUTINGPOLICY_H

@class NSArray, BSMutableSettings;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding>



@property (nonatomic, getter=shouldAvoidHitTesting) BOOL avoidHitTesting;
@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (retain, nonatomic) BSMutableSettings *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
+(void)inspectChangesWithOldPolicy:(id)arg0 newPolicy:(id)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif