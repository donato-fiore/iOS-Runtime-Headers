// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCANMO_H
#define SCANMO_H

@class NSManagedObject, NSDate;


#import "BSSMO.h"

@interface ScanMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) BSSMO *origin;
@property (nonatomic) short originRssi;
@property (retain, nonatomic) BSSMO *result;
@property (nonatomic) short resultRssi;


+(BOOL)getSsidAndBssidWithinRangeForColocatedScopeTransition:(id)arg0 bssid:(id)arg1 minRssi:(int)arg2 maxRssi:(int)arg3 band:(unsigned int)arg4 transitionSsid:(*id)arg5 transitionBssid:(*id)arg6 transitionRssi:(*int)arg7 authFlags:(*id)arg8 moc:(id)arg9 ;
+(id)entityName;
+(id)fetchRequest;
+(id)generateInstance:(id)arg0 ;


@end


#endif