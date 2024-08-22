// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SABLOCKINGINFO_H
#define SABLOCKINGINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SABlockingInfo : NSObject

@property (readonly) int blockingPid;
@property (readonly) NSUInteger blockingTid;
@property (readonly) NSUInteger portDomain;
@property (readonly) NSUInteger portFlags;
@property (readonly) NSString *portName;


-(BOOL)hasMatchingBlocker:(id)arg0 ;
-(id)_init;
-(id)init;


@end


#endif