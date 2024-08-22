// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ELSSNAPSHOT_H
#define ELSSNAPSHOT_H

@class NSData, NSArray, NSUserDefaults, NSDate, NSDictionary, DEDDevice, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ELSSnapshot : NSObject <NSCopying>



@property (nonatomic) NSUInteger consent; // ivar: _consent
@property (retain, nonatomic) NSData *consentData; // ivar: _consentData
@property (retain, nonatomic) NSArray *consentHandles; // ivar: _consentHandles
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
@property (retain, nonatomic) DEDDevice *sessionDevice; // ivar: _sessionDevice
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) CGFloat totalDuration;
@property (retain, nonatomic) NSNumber *uploadCompletedPercentage; // ivar: _uploadCompletedPercentage


+(id)consentToString:(NSUInteger)arg0 ;
+(id)statusToString:(NSUInteger)arg0 ;
-(id)JSONObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodeQueue:(id)arg0 ;
-(id)dedSessionIdentifier;
-(id)description;
-(id)dictionaryRepresentationPretty:(BOOL)arg0 ;
-(id)init;
-(void)refreshConsent;
-(void)refreshConsentData;
-(void)refreshConsentHandles;
-(void)refreshDates;
-(void)refreshFollowUpOptions;
-(void)refreshIdentifiersToRetry;
-(void)refreshKeyPaths:(id)arg0 ;
-(void)refreshMetadata;
-(void)refreshQueue;
-(void)refreshRetriesRemaining;
-(void)refreshSessionDevice;
-(void)refreshStatus;
-(void)refreshUploadCompletedPercentage;


@end


#endif