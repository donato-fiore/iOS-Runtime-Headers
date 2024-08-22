// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKPLATFORMINTERNETDATEPROVIDER_H
#define CRKPLATFORMINTERNETDATEPROVIDER_H

@class NSMutableArray, NSString, NSDate;
@protocol CRKInternetDateFetching;

#import <Foundation/Foundation.h>


@interface CRKPlatformInternetDateProvider : NSObject <CRKInternetDateFetching>



@property (retain, nonatomic) NSMutableArray *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) NSObject<CRKInternetDateFetching> *dateFetchingProvider; // ivar: _dateFetchingProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *internetDateAndTime; // ivar: _internetDateAndTime
@property (readonly) Class superclass;
@property (nonatomic) CGFloat uptimeAtInternetDateAndTimeFetch; // ivar: _uptimeAtInternetDateAndTimeFetch


+(id)sharedProvider;
-(id)fetchExistingInternetDate;
-(id)init;
-(void)fetchInternetDateWithCompletion:(id)arg0 ;


@end


#endif