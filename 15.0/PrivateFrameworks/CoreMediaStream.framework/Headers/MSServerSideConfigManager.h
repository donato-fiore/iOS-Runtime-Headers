// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSERVERSIDECONFIGMANAGER_H
#define MSSERVERSIDECONFIGMANAGER_H

@class NSDictionary, NSString;
@protocol MSServerSideConfigProtocolDelegate;

#import <Foundation/Foundation.h>

#import "MSServerSideConfigProtocol.h"
#import "MSMediaStreamDaemon.h"

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate>

 {
    NSDictionary *_config;
    NSString *_configPath;
    MSServerSideConfigProtocol *_protocol;
    int _state;
}


@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) MSMediaStreamDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (readonly) Class superclass;


+(CGFloat)doubleValueForParameter:(id)arg0 forPersonID:(id)arg1 defaultValue:(CGFloat)arg2 ;
+(NSInteger)longLongValueForParameter:(id)arg0 forPersonID:(id)arg1 defaultValue:(NSInteger)arg2 ;
+(NSInteger)longValueForParameter:(id)arg0 forPersonID:(id)arg1 defaultValue:(NSInteger)arg2 ;
+(id)configManagerForPersonID:(id)arg0 ;
+(id)existingConfigManagerForPersonID:(id)arg0 ;
+(id)objectForKey:(id)arg0 forPersonID:(id)arg1 defaultValue:(id)arg2 ;
+(int)intValueForParameter:(id)arg0 forPersonID:(id)arg1 defaultValue:(int)arg2 ;
+(void)abortAllActivities;
+(void)forgetPersonID:(id)arg0 ;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)abort;
-(void)dealloc;
-(void)refreshConfiguration;
-(void)serverSideConfigProtocol:(id)arg0 didFinishWithConfiguration:(id)arg1 error:(id)arg2 ;
-(void)serverSideConfigProtocol:(id)arg0 didReceiveAuthenticationError:(id)arg1 ;


@end


#endif