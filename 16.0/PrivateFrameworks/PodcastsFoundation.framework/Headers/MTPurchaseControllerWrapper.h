// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTPURCHASECONTROLLERWRAPPER_H
#define MTPURCHASECONTROLLERWRAPPER_H


#import <Foundation/Foundation.h>


@interface MTPurchaseControllerWrapper : NSObject {
    ? purchaseController;
}




+(id)sharedInstance;
-(id)init;
-(void)fetchChannelUpdatesCheckingEntitlementsNotification;
-(void)forceFetchLatestChannelUpdates;


@end


#endif