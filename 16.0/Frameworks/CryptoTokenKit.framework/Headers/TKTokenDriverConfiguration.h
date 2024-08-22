// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENDRIVERCONFIGURATION_H
#define TKTOKENDRIVERCONFIGURATION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "TKTokenConfigurationConnection.h"

@interface TKTokenDriverConfiguration : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
}


@property (readonly, nonatomic) NSString *classID; // ivar: _classID
@property (readonly, copy, nonatomic) NSDictionary *tokenConfigurations;


+(id)driverConfigurations;
+(id)driverConfigurationsWithClient:(id)arg0 ;
-(id)addTokenConfigurationForTokenInstanceID:(id)arg0 ;
-(id)beginTransaction;
-(id)createTokenConfigurationWithInstanceID:(id)arg0 persistent:(BOOL)arg1 ;
-(id)initWithClassID:(id)arg0 configurationConnection:(id)arg1 ;
-(void)removeTokenConfigurationForTokenInstanceID:(id)arg0 ;


@end


#endif