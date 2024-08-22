// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ELSSNAPSHOT_H
#define ELSSNAPSHOT_H

@class NSUserDefaults, NSArray, NSDate, NSDictionary, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ELSSnapshot : NSObject <NSCopying>



@property (nonatomic) NSUInteger consent; // ivar: _consent
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, nonatomic) CGFloat durationRemaining;
@property (readonly, nonatomic) NSArray *encodedQueue;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDictionary *followUpOptions; // ivar: _followUpOptions
@property (retain, nonatomic) NSArray *identifiersToRetry; // ivar: _identifiersToRetry
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) BOOL needsFollowup;
@property (retain, nonatomic) NSArray *queue; // ivar: _queue
@property (nonatomic) NSInteger retriesRemaining; // ivar: _retriesRemaining
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) CGFloat totalDuration;
@property (retain, nonatomic) NSNumber *uploadCompletedPercentage; // ivar: _uploadCompletedPercentage


+(id)consentToString:(NSUInteger)arg0 ;
+(id)statusToString:(NSUInteger)arg0 ;
-(id)JSONObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodeQueue:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentationPretty:(BOOL)arg0 ;
-(id)init;
-(void)refreshConsent;
-(void)refreshDates;
-(void)refreshFollowUpOptions;
-(void)refreshIdentifiersToRetry;
-(void)refreshKeyPaths:(id)arg0 ;
-(void)refreshMetadata;
-(void)refreshQueue;
-(void)refreshRetriesRemaining;
-(void)refreshStatus;
-(void)refreshUploadCompletedPercentage;


@end


#endif