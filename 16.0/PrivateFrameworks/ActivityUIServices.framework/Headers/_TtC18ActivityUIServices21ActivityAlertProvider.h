// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYUISERVICES21ACTIVITYALERTPROVIDER_H
#define _TTC18ACTIVITYUISERVICES21ACTIVITYALERTPROVIDER_H

@class TLAlertConfiguration, NSString;
@protocol _TtP18ActivityUIServices22ActivityAlertProviding_;

#import <Foundation/Foundation.h>


@interface _TtC18ActivityUIServices21ActivityAlertProvider : NSObject <_TtP18ActivityUIServices22ActivityAlertProviding_>

 {
    ? activityIdentifier;
    ? alertAction;
    ? alertConfiguration;
}


@property (nonatomic, readonly) NSInteger action;
@property (nonatomic, retain) TLAlertConfiguration *configuration; // ivar: configuration
@property (nonatomic, readonly) NSString *identifier;


-(id)init;
-(id)initWithIdentifier:(id)arg0 action:(NSInteger)arg1 configuration:(id)arg2 ;


@end


#endif