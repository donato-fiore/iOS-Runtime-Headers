// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSERVICECENTERUTILS_H
#define CDMSERVICECENTERUTILS_H


#import <Foundation/Foundation.h>


@interface CDMServiceCenterUtils : NSObject



+(BOOL)isServiceCenterEnabled:(id)arg0 ;
+(id)tryInitDAGServices:(id)arg0 ;
+(unsigned int)getServiceCenterQueueQOS;


@end


#endif