// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONHARMONYSERVICE_H
#define SBAPPLICATIONHARMONYSERVICE_H

@class NSString;
@protocol SBApplicationServerHarmonyDelegate;

#import <Foundation/Foundation.h>


@interface SBApplicationHarmonyService : NSObject <SBApplicationServerHarmonyDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)applicationServer:(id)arg0 client:(id)arg1 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg2 withCompletion:(id)arg3 ;


@end


#endif