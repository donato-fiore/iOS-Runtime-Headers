// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITRIALPROXYMOCK_H
#define TITRIALPROXYMOCK_H

@class NSString;
@protocol TITrialProxy;

#import <Foundation/Foundation.h>


@interface TITrialProxyMock : NSObject <TITrialProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) id *trialNotificationSender;


-(id)encodedTrialParametersForLocale:(id)arg0 ;


@end


#endif