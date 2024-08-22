// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSEVENTCONTENTRETRIEVED_H
#define TPSANALYTICSEVENTCONTENTRETRIEVED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentRetrieved : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (retain, nonatomic) NSString *serviceError; // ivar: _serviceError
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 serviceError:(id)arg4 ;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 serviceError:(id)arg2 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 serviceError:(id)arg4 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 serviceError:(id)arg2 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif