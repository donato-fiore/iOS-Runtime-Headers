// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAPHONEAPPLICATIONLAUNCHER_H
#define SAPHONEAPPLICATIONLAUNCHER_H

@class NSMutableDictionary, NSString;
@protocol SAApplicationLauncher;

#import <Foundation/Foundation.h>


@interface SAPhoneApplicationLauncher : NSObject <SAApplicationLauncher>

 {
    NSMutableDictionary *_assertionMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addAssertion:(id)arg0 forProcessId:(int)arg1 ;
-(void)cleanupInvalidAssertions;
-(void)openApplicationInBackgroundWithBundleId:(id)arg0 withReason:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif