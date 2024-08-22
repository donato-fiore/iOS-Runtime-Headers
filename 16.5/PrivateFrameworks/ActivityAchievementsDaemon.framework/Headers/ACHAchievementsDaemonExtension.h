// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHACHIEVEMENTSDAEMONEXTENSION_H
#define ACHACHIEVEMENTSDAEMONEXTENSION_H

@class NSString;
@protocol HDHealthDaemonExtension, HDHealthDaemonReadyObserver, HDCacheDeleteProvider;

#import <Foundation/Foundation.h>

#import "ACHMobileAssetProvider.h"

@interface ACHAchievementsDaemonExtension : NSObject <HDHealthDaemonExtension, HDHealthDaemonReadyObserver, HDCacheDeleteProvider>

 {
    ACHMobileAssetProvider *_mobileAssetProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)purgeSpaceForUrgency:(int)arg0 ;
-(NSInteger)purgeableSpaceForUrgency:(int)arg0 ;
-(id)initWithDaemon:(id)arg0 mobileAssetProvider:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;


@end


#endif