// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSLOCALDRAFTSDEVICEMANAGER_H
#define TSLOCALDRAFTSDEVICEMANAGER_H

@protocol TSLocalDraftsDeviceManagerType, TSLocalDraftsDelegate;

#import <Foundation/Foundation.h>


@interface TSLocalDraftsDeviceManager : NSObject <TSLocalDraftsDeviceManagerType>

 {
    ? listener;
}


@property (nonatomic, weak) NSObject<TSLocalDraftsDelegate> *delegate; // ivar: delegate


-(id)init;


@end


#endif