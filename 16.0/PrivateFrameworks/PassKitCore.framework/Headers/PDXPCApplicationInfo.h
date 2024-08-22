// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDXPCAPPLICATIONINFO_H
#define PDXPCAPPLICATIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PDXPCApplicationInfo : NSObject

@property (readonly, nonatomic) NSString *displayID; // ivar: _displayID
@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)init;
-(id)initWithPID:(int)arg0 ;


@end


#endif