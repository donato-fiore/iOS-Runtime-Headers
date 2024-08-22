// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRESETTRACKER_H
#define CPLRESETTRACKER_H

@class NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLResetTracker : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *earliestReasonDate;
@property (readonly, nonatomic) BOOL hasReasons;
@property (readonly, nonatomic) NSDate *likelyResetDate;
@property (readonly, copy, nonatomic) NSArray *resetReasons; // ivar: _resetReasons


+(BOOL)shouldIgnoreDefaultsCPLKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)currentReasonDescriptions;
+(id)currentTracker;
+(id)registerTentativeResetReasonIfCrashing:(id)arg0 ;
+(void)_registerReasonLocked:(id)arg0 ;
+(void)_storeReasonsLocked;
+(void)discardTentativeResetReason:(id)arg0 ;
+(void)discardTracker:(id)arg0 ;
+(void)initialize;
+(void)registerLikelyResetReason:(id)arg0 ;
+(void)registerLikelyResetReason:(id)arg0 arguments:(char *)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResetReasons:(id)arg0 ;
-(id)likelyResetReasonWithImmediateReason:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif