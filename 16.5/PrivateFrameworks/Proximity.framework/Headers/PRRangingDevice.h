// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRRANGINGDEVICE_H
#define PRRANGINGDEVICE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PRRangingDevice : NSObject {
    NSDictionary *_clientInfo;
}


@property (readonly, copy) NSDictionary *clientInfo;


+(BOOL)isSupported;
-(id)init;


@end


#endif