// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18ACTIVITYUISERVICES21ACTIVITYALERTPROVIDER_H
#define _TTC18ACTIVITYUISERVICES21ACTIVITYALERTPROVIDER_H

@class TLAlertConfiguration, NSString, ACAlertPresentationOptions;
@protocol _TtP18ActivityUIServices22ActivityAlertProviding_;

#import <Foundation/Foundation.h>


@interface _TtC18ActivityUIServices21ActivityAlertProvider : NSObject <_TtP18ActivityUIServices22ActivityAlertProviding_>

 {
    ? activityIdentifier;
    ? alertAction;
    ? alertConfiguration;
    ? applicationBundleIdentifier;
    ? payloadID;
}


@property (nonatomic, readonly) NSInteger action;
@property (nonatomic, retain) TLAlertConfiguration *configuration; // ivar: configuration
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *payloadIdentifier;
@property (nonatomic, retain) ACAlertPresentationOptions *presentationOptions; // ivar: presentationOptions


-(id)init;
-(id)initWithIdentifier:(id)arg0 payloadIdentifier:(id)arg1 action:(NSInteger)arg2 presentationOptions:(id)arg3 soundName:(id)arg4 applicationBundleIdentifier:(id)arg5 ;


@end


#endif