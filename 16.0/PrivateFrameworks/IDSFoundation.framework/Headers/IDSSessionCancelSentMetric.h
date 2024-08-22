// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSESSIONCANCELSENTMETRIC_H
#define IDSSESSIONCANCELSENTMETRIC_H

@class NSString, NSDictionary, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSSessionCancelSentMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSNumber *numberOfRecipients; // ivar: _numberOfRecipients
@property (readonly, nonatomic) unsigned int remoteSessionEndReason; // ivar: _remoteSessionEndReason
@property (readonly) Class superclass;


-(id)initWithGuid:(id)arg0 numberOfRecipients:(id)arg1 remoteSessionEndReason:(unsigned int)arg2 ;


@end


#endif