// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKGLOBALCONFIG_H
#define AKGLOBALCONFIG_H


#import <Foundation/Foundation.h>


@interface AKGlobalConfig : NSObject



+(id)sharedInstance;
-(void)fetchGlobalConfigUsingCachePolicy:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif