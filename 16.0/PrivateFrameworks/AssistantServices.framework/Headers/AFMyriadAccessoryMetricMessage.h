// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMYRIADACCESSORYMETRICMESSAGE_H
#define AFMYRIADACCESSORYMETRICMESSAGE_H


#import <Foundation/Foundation.h>


@interface AFMyriadAccessoryMetricMessage : NSObject {
    MyriadMetricsDataV1 _metric;
}


@property (readonly, nonatomic) CGFloat advDelay;
@property (readonly, nonatomic) CGFloat advInterval;
@property (readonly, nonatomic) BOOL coordinationAllowed;
@property (readonly, nonatomic) BOOL decision;
@property (readonly, nonatomic) unsigned char deviceGroup;
@property (readonly, nonatomic) unsigned char electionParticipantCount;
@property (readonly, nonatomic) char * electionParticipantDeviceType;
@property (readonly, nonatomic) char * electionParticipantGoodnessScore;
@property (readonly, nonatomic) char * electionParticipantProductType;
@property (readonly, nonatomic) unsigned char eventType;
@property (readonly, nonatomic) BOOL homepodInvolved;
@property (readonly, nonatomic) BOOL lateToElection;
@property (readonly, nonatomic) BOOL previousDecision;
@property (readonly, nonatomic) CGFloat previousDecisionTime;
@property (readonly, nonatomic) NSUInteger requestType;
@property (readonly, nonatomic) NSUInteger sessionId;
@property (readonly, nonatomic) unsigned char state;
@property (readonly, nonatomic) unsigned char version;
@property (readonly, nonatomic) unsigned char winnerDeviceClass;
@property (readonly, nonatomic) unsigned char winnerGoodnessScore;
@property (readonly, nonatomic) unsigned char winnerProductType;


-(BOOL)_decodeMetricDataPayload:(id)arg0 decodedPayload:(struct MyriadMetricsDataV1 *)arg1 ;
-(id)_extractMetricDataFromDataPayload:(id)arg0 ;
-(id)initWithDataPayload:(id)arg0 ;
-(id)initWithMetricData:(id)arg0 ;
-(id)messageAsData;
-(struct MyriadMetricsDataV1 )messageAsStruct;


@end


#endif