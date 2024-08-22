// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMTRIGGERCRITERIA_H
#define WIFIUSAGELQMTRIGGERCRITERIA_H

@class NSString, NSDate, NSPredicate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiUsageLQMTriggerCriteria : NSObject <NSCopying>



@property (retain, nonatomic) NSString *bssid; // ivar: _bssid
@property (retain, nonatomic) NSDate *currentSample; // ivar: _currentSample
@property (retain, nonatomic) NSString *filterCriteria; // ivar: _filterCriteria
@property (retain, nonatomic) NSDate *firstTriggered; // ivar: _firstTriggered
@property (retain, nonatomic) NSDate *lastTriggered; // ivar: _lastTriggered
@property (nonatomic) BOOL matched; // ivar: _matched
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSPredicate *requiredFieldsValid; // ivar: _requiredFieldsValid
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL valid; // ivar: _valid


+(id)dataTriggeredTypes;
+(id)parseCriteria:(id)arg0 intoRequiredFields:(id)arg1 andFeatures:(id)arg2 forFields:(id)arg3 withType:(id)arg4 isFilter:(BOOL)arg5 ;
+(id)predicateNoQuotes:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWith:(id)arg0 forFields:(id)arg1 andFeatures:(id)arg2 ;
-(id)shortPredicate;
-(id)shortPredicateNoSpaces;


@end


#endif