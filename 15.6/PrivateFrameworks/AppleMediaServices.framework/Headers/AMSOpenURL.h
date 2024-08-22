// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSOPENURL_H
#define AMSOPENURL_H

@class NSURL, NSMutableSet;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSOpenURL : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSMutableSet *attemptedTargets; // ivar: _attemptedTargets
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo


+(BOOL)_openURL:(id)arg0 inApp:(id)arg1 ;
+(BOOL)_openURLWithLaunchServices:(id)arg0 ;
+(BOOL)_shouldOpenStandardURL:(id)arg0 inApp:(id)arg1 withLinks:(id)arg2 ;
+(BOOL)openStandardURL:(id)arg0 ;
+(NSUInteger)_openModeForStandardURL:(id)arg0 inApp:(id)arg1 withLinks:(id)arg2 ;
+(id)_modifiedURLFromURL:(id)arg0 bundleInfo:(id)arg1 ;
+(id)openURL:(id)arg0 clientInfo:(id)arg1 bag:(id)arg2 ;
+(void)openURL:(id)arg0 account:(id)arg1 preferredClient:(id)arg2 ;
-(BOOL)_openURL:(id)arg0 bundleInfo:(id)arg1 ;
-(BOOL)_shouldOpenURL:(id)arg0 ;
-(id)_performOpen;
-(id)initWithURL:(id)arg0 clientInfo:(id)arg1 bag:(id)arg2 ;


@end


#endif