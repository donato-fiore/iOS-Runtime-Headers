// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSEVENTCONTENTREQUESTEDBYCLIENT_H
#define TPSANALYTICSEVENTCONTENTREQUESTEDBYCLIENT_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentRequestedByClient : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *context; // ivar: _context


+(BOOL)supportsSecureCoding;
+(id)eventWithBundleID:(id)arg0 context:(id)arg1 ;
-(id)_initWithBundleID:(id)arg0 context:(id)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif