// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMPROXPDPMANAGER_H
#define CMPROXPDPMANAGER_H


#import <Foundation/Foundation.h>

#import "CMProxPDPManagerInternal.h"

@interface CMProxPDPManager : NSObject

@property (readonly, nonatomic) CMProxPDPManagerInternal *_internal; // ivar: _internal


+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(void)startPDPUpdatesWithHandler:(id)arg0 ;


@end


#endif