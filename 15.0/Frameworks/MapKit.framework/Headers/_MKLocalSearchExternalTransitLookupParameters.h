// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKLOCALSEARCHEXTERNALTRANSITLOOKUPPARAMETERS_H
#define _MKLOCALSEARCHEXTERNALTRANSITLOOKUPPARAMETERS_H

@class NSString, NSArray, NSDate, CLLocation;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _MKLocalSearchExternalTransitLookupParameters : NSObject <NSCopying>



@property (copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (copy, nonatomic) NSArray *stationCodes; // ivar: _stationCodes
@property (retain, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (retain, nonatomic) CLLocation *transactionLocation; // ivar: _transactionLocation


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif