// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES20SESSIONALERTPROVIDER_H
#define _TTC17SESSIONUISERVICES20SESSIONALERTPROVIDER_H

@class TLAlertConfiguration, NSString;
@protocol _TtP17SessionUIServices21SessionAlertProviding_;

#import <Foundation/Foundation.h>


@interface _TtC17SessionUIServices20SessionAlertProvider : NSObject <_TtP17SessionUIServices21SessionAlertProviding_>

 {
    ? sessionIdentifier;
    ? alertAction;
    ? alertOptions;
}


@property (nonatomic, readonly) NSInteger action;
@property (nonatomic, readonly) TLAlertConfiguration *configuration;
@property (nonatomic, readonly) NSString *identifier;


-(id)init;
-(id)initWithIdentifier:(id)arg0 action:(NSInteger)arg1 options:(id)arg2 ;


@end


#endif