// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONFIGURATION_H
#define APCONFIGURATION_H

@class NSDictionary, NSString;
@protocol APConfigurationProtocol, APPurgeableCacheNotifierP;

#import <Foundation/Foundation.h>


@interface APConfiguration : NSObject <APConfigurationProtocol>



@property (retain, nonatomic) NSDictionary *configDictionary; // ivar: configDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier;
@property (readonly, nonatomic) BOOL isDead;
@property (retain, nonatomic) NSObject<APPurgeableCacheNotifierP> *notifier; // ivar: _notifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger version;


+(id)path;
-(id)initWithConfig:(id)arg0 notifier:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif