// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASRESOLVERECIPIENTSTASK_H
#define ASRESOLVERECIPIENTSTASK_H

@class NSArray, NSDate;


#import "ASTask.h"

@interface ASResolveRecipientsTask : ASTask {
    NSArray *_emailAddresses;
}


@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (nonatomic) BOOL retrieveAvailability; // ivar: _retrieveAvailability
@property (nonatomic) BOOL retrieveCertificates; // ivar: _retrieveCertificates
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(NSInteger)availabilityStatusForExchangeStatus:(int)arg0 ;
-(NSInteger)certStatusForExchangeStatus:(int)arg0 ;
-(NSInteger)responseStatusForExchangeStatus:(int)arg0 ;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)_roundDownTo30MinuteBoundary:(id)arg0 ;
-(id)_roundUpTo30MinuteBoundary:(id)arg0 ;
-(id)initForCertificatesWithEmailAddresses:(id)arg0 ;
-(id)initFreeBusyQueryWithStartDate:(id)arg0 endDate:(id)arg1 emailAddresses:(id)arg2 ;
-(id)requestBody;
-(int)commandCode;
-(void)finishWithError:(id)arg0 ;


@end


#endif