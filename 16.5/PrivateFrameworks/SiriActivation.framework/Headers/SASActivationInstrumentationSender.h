// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASACTIVATIONINSTRUMENTATIONSENDER_H
#define SASACTIVATIONINSTRUMENTATIONSENDER_H

@class SiriAnalyticsClientMessageStream;

#import <Foundation/Foundation.h>


@interface SASActivationInstrumentationSender : NSObject {
    SiriAnalyticsClientMessageStream *_analyticsStream;
}




-(id)_clientEventWithActivationEventIdentifier:(id)arg0 ;
-(id)initWithAnalyticsStream:(id)arg0 ;
-(void)instrumentButtonInteractionType:(int)arg0 buttonIdentifier:(id)arg1 activationEventIdentifier:(id)arg2 ;
-(void)instrumentTurnActivatedWithTurnId:(id)arg0 activationEventIdentifier:(id)arg1 ;


@end


#endif