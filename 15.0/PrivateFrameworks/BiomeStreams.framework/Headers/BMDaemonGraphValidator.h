// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDAEMONGRAPHVALIDATOR_H
#define BMDAEMONGRAPHVALIDATOR_H


#import <Foundation/Foundation.h>


@interface BMDaemonGraphValidator : NSObject



+(BOOL)isExecutionAllowedForGraph:(id)arg0 ;
+(BOOL)isFilterExecutable:(id)arg0 ;
+(BOOL)isStreamPublisherExecutable:(id)arg0 ;
+(id)allowedKeyPaths;


@end


#endif