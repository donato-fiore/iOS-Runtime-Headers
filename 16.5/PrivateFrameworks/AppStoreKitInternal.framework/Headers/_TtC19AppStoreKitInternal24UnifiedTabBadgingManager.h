// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL24UNIFIEDTABBADGINGMANAGER_H
#define _TTC19APPSTOREKITINTERNAL24UNIFIEDTABBADGINGMANAGER_H

@protocol ASDAppStoreChangedObserver;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal24UnifiedTabBadgingManager : NSObject <ASDAppStoreChangedObserver>

 {
    ? appStoreBadgingService;
    ? rootActionHandler;
}




-(id)init;
-(void)service:(id)arg0 didAddBadges:(id)arg1 ;
-(void)service:(id)arg0 didRemoveBadges:(id)arg1 ;


@end


#endif