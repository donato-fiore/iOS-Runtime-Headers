// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDEVICEDATASOURCE_H
#define CHDEVICEDATASOURCE_H

@class NSString;
@protocol CHDeviceDataSource;

#import <Foundation/Foundation.h>


@interface CHDeviceDataSource : NSObject <CHDeviceDataSource>



@property (readonly, nonatomic, getter=isBootLockEnabled) BOOL bootLockEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif