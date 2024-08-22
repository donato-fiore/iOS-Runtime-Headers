// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSNOTEMESSAGERECEIVEDMETRIC_H
#define IDSNOTEMESSAGERECEIVEDMETRIC_H

@class NSNumber, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSNoteMessageReceivedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSNumber *accountType; // ivar: _accountType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL fromStorage; // ivar: _fromStorage
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat localTimeDelta; // ivar: _localTimeDelta
@property (readonly) NSString *name;
@property (readonly, nonatomic) CGFloat serverTimestamp; // ivar: _serverTimestamp
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 accountType:(id)arg1 fromStorage:(BOOL)arg2 serverTimestamp:(CGFloat)arg3 localTimeDelta:(CGFloat)arg4 ;


@end


#endif