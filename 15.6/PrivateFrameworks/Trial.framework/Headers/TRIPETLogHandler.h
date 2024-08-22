// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPETLOGHANDLER_H
#define TRIPETLOGHANDLER_H

@class NSString;
@protocol TRILogHandling;

#import <Foundation/Foundation.h>


@interface TRIPETLogHandler : NSObject <TRILogHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)logEvent:(id)arg0 subgroupName:(id)arg1 queue:(id)arg2 ;


@end


#endif