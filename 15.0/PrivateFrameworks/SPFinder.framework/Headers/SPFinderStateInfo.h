// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPFINDERSTATEINFO_H
#define SPFINDERSTATEINFO_H

@class NSSet, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPFinderStateInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger activeCache; // ivar: _activeCache
@property (readonly, copy, nonatomic) NSSet *disabledReasons;
@property (retain, nonatomic) NSArray *disabledReasonsArray; // ivar: _disabledReasonsArray
@property (copy, nonatomic) NSDate *lastPublishDate; // ivar: _lastPublishDate
@property (copy, nonatomic) NSDate *lastScheduledPublishActivityDate; // ivar: _lastScheduledPublishActivityDate
@property (copy, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (nonatomic) BOOL optInScreenOffScan; // ivar: _optInScreenOffScan
@property (nonatomic) BOOL state; // ivar: _state


+(BOOL)canPublishAnonymously;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(BOOL)arg0 optInScreenOffScan:(BOOL)arg1 lastUpdated:(id)arg2 lastPublishDate:(id)arg3 lastScheduledPublishActivityDate:(id)arg4 activeCache:(NSInteger)arg5 disabledReasons:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif