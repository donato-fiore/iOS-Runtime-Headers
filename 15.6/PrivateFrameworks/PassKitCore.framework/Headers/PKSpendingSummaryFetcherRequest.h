// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSPENDINGSUMMARYFETCHERREQUEST_H
#define PKSPENDINGSUMMARYFETCHERREQUEST_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying>



@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL withLastChange; // ivar: _withLastChange


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif