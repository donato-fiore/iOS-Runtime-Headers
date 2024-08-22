// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTLINKACTION_H
#define TPSANALYTICSEVENTLINKACTION_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventLinkAction : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *actionDirection; // ivar: _actionDirection
@property (retain, nonatomic) NSString *actionName; // ivar: _actionName
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 actionName:(id)arg1 actionDirection:(id)arg2 ;
-(id)_initWithTipID:(id)arg0 actionName:(id)arg1 actionDirection:(id)arg2 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif