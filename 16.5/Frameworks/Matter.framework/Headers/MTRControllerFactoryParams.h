// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTROLLERFACTORYPARAMS_H
#define MTRCONTROLLERFACTORYPARAMS_H

@class NSArray;
@protocol MTRPersistentStorageDelegate;


#import "MTRDeviceControllerFactoryParams.h"

@interface MTRControllerFactoryParams : MTRDeviceControllerFactoryParams

@property (copy, nonatomic) NSArray *cdCerts;
@property (copy, nonatomic) NSArray *paaCerts;
@property (nonatomic) BOOL startServer;
@property (readonly, nonatomic) NSObject<MTRPersistentStorageDelegate> *storageDelegate;




@end


#endif