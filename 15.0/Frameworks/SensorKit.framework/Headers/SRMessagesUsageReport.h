// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRMESSAGESUSAGEREPORT_H
#define SRMESSAGESUSAGEREPORT_H

@class NSString, NSMutableSet;
@protocol SRSampleExporting, NSSecureCoding, SRSampling;

#import <Foundation/Foundation.h>


@interface SRMessagesUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>

 {
    NSInteger _totalUniqueContacts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property NSInteger totalIncomingMessages; // ivar: _totalIncomingMessages
@property NSInteger totalOutgoingMessages; // ivar: _totalOutgoingMessages
@property (readonly) NSInteger totalUniqueContacts;
@property (retain) NSMutableSet *uniqueContacts; // ivar: _uniqueContacts


+(BOOL)supportsSecureCoding;
+(id)usageReportWithInterval:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)binarySampleRepresentation;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif