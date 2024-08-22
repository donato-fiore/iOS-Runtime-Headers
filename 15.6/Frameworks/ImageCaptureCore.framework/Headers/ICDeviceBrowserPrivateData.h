// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDEVICEBROWSERPRIVATEDATA_H
#define ICDEVICEBROWSERPRIVATEDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICDeviceBrowserPrivateData : NSObject

@property (getter=isBrowsing) BOOL browsing; // ivar: _browsing
@property id *delegate; // ivar: _delegate
@property (retain) NSMutableArray *internalDevices; // ivar: _internalDevices
@property (getter=isSuspended) BOOL suspended; // ivar: _suspended


-(void)dealloc;


@end


#endif