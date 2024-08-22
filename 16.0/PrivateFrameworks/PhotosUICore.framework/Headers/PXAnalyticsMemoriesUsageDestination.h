// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXANALYTICSMEMORIESUSAGEDESTINATION_H
#define PXANALYTICSMEMORIESUSAGEDESTINATION_H

@class NSString;
@protocol CPAnalyticsDestinationProtocol, PXDisplayAssetCollection;

#import <Foundation/Foundation.h>


@interface PXAnalyticsMemoriesUsageDestination : NSObject <CPAnalyticsDestinationProtocol>

 {
    NSInteger _defaultNavigationKind;
    NSInteger _currentURLNavigationKind;
    NSInteger _sessionInitialNavigationKind;
    id<PXDisplayAssetCollection> *_lastAppearedAssetCollection;
    NSInteger _lastAppearedAssetCollectionNavigationKind;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)forYouTabOpenedAppEventNameWithNavigationKind:(NSInteger)arg0 ;
+(id)forYouTabOpenedEventName;
+(id)payloadLaunchTypeKey;
+(id)payloadSessionStartTypeKey;
-(id)init;
-(void)processEvent:(id)arg0 ;


@end


#endif