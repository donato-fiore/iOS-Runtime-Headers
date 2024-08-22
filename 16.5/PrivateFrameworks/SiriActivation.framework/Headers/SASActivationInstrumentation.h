// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASACTIVATIONINSTRUMENTATION_H
#define SASACTIVATIONINSTRUMENTATION_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "SASActivationInstrumentationSender.h"

@interface SASActivationInstrumentation : NSObject {
    SASActivationInstrumentationSender *_instrumentationSender;
}


@property (readonly) NSUUID *activationEventIdentifier; // ivar: _activationEventIdentifier


-(id)buttonDownWithIdentifier:(id)arg0 ;
-(id)buttonTapWithIdentifier:(id)arg0 associateWithButtonDown:(BOOL)arg1 ;
-(id)buttonUpWithIdentifier:(id)arg0 ;
-(id)initWithAnalyticsStream:(id)arg0 ;
-(id)mostRecentAtivationEvenIdentifier;
-(void)_instrumentButtonInteractionType:(int)arg0 buttonIdentifier:(id)arg1 ;


@end


#endif