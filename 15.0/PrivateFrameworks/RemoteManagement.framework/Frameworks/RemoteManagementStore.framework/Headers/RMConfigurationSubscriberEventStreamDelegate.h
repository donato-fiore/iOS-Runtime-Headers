// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMCONFIGURATIONSUBSCRIBEREVENTSTREAMDELEGATE_H
#define RMCONFIGURATIONSUBSCRIBEREVENTSTREAMDELEGATE_H

@class NSDictionary, NSString;
@protocol RMConfigurationSubscriberEventStreamDelegate;

#import <Foundation/Foundation.h>


@interface RMConfigurationSubscriberEventStreamDelegate : NSObject <RMConfigurationSubscriberEventStreamDelegate>



@property (readonly, copy, nonatomic) NSDictionary *applicatorClassesByType; // ivar: _applicatorClassesByType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithApplicatorsByType:(id)arg0 ;
-(void)configurationSubscriber:(id)arg0 didFailToFetchConfigurationsWithTypes:(id)arg1 error:(id)arg2 ;
-(void)configurationSubscriber:(id)arg0 didFetchConfigurationsByType:(id)arg1 ;
-(void)configurationSubscriber:(id)arg0 didReceiveChangesForConfigurationTypes:(id)arg1 ;
-(void)configurationSubscriber:(id)arg0 didReceiveMessage:(id)arg1 ;


@end


#endif