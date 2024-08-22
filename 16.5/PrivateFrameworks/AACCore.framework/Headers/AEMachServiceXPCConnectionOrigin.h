// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEMACHSERVICEXPCCONNECTIONORIGIN_H
#define AEMACHSERVICEXPCCONNECTIONORIGIN_H

@class NSString;
@protocol AEXPCConnectionOrigin;

#import <Foundation/Foundation.h>


@interface AEMachServiceXPCConnectionOrigin : NSObject <AEXPCConnectionOrigin>

 {
    NSString *_machServiceName;
    NSUInteger _options;
}




-(id)makeConnection;


@end


#endif