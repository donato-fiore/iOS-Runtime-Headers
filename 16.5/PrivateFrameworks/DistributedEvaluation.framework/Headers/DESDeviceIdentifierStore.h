// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESDEVICEIDENTIFIERSTORE_H
#define DESDEVICEIDENTIFIERSTORE_H

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DESDeviceIdentifierStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSMutableDictionary *deviceIdentifiers; // ivar: _deviceIdentifiers
@property (retain, nonatomic) NSURL *storeURL; // ivar: _storeURL


-(id)identifierForBundleId:(id)arg0 ;
-(id)init;
-(id)initWithStoreURL:(id)arg0 ;
-(void)_readIdentifierStore;
-(void)_writeIdentifierStore;


@end


#endif