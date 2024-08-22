// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLIENTCHANGEPUBLISHER_H
#define PLCLIENTCHANGEPUBLISHER_H

@class PLAssetsdClient, NSString;
@protocol PLChangePublisher;

#import <Foundation/Foundation.h>


@interface PLClientChangePublisher : NSObject <PLChangePublisher>

 {
    PLAssetsdClient *_assetsdClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAssetsdClient:(id)arg0 ;
-(id)publishChangeEvent:(id)arg0 delayedSaveActionsDetail:(id)arg1 transaction:(id)arg2 ;
-(void)pauseLaunchEventNotifications;
-(void)unpauseLaunchEventNotifications;


@end


#endif