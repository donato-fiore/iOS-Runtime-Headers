// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKDIRECTORYPROVIDER_H
#define NNMKDIRECTORYPROVIDER_H

@class NSString;
@protocol NNMKDirectoryProvider;

#import <Foundation/Foundation.h>


@interface NNMKDirectoryProvider : NSObject <NNMKDirectoryProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *pairedDeviceRegistryPath;
@property (readonly) Class superclass;


+(void)removePairedDeviceRegistryPathFromUserDefaults;


@end


#endif