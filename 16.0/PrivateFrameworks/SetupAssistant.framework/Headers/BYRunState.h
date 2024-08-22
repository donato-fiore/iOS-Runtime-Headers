// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYRUNSTATE_H
#define BYRUNSTATE_H

@class NSString;
@protocol BYRunState;

#import <Foundation/Foundation.h>


@interface BYRunState : NSObject <BYRunState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasCompletedInitialRun;


@end


#endif