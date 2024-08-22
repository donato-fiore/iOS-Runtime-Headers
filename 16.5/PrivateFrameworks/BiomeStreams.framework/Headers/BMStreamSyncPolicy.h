// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMSYNCPOLICY_H
#define BMSTREAMSYNCPOLICY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BMStreamSyncPolicy : NSObject {
    NSInteger _currentPlatform;
}


@property (readonly, nonatomic) NSDictionary *policy; // ivar: _policy
@property (readonly, nonatomic) Class registeredEventClass; // ivar: _registeredEventClass


-(BOOL)supportsSyncingWithPlatform:(NSInteger)arg0 overTransport:(NSUInteger)arg1 inDirection:(NSUInteger)arg2 ;
-(BOOL)supportsSyncingWithPlatform:(NSInteger)arg0 overTransport:(NSUInteger)arg1 inDirection:(NSUInteger)arg2 fromPlatform:(NSInteger)arg3 ;
-(BOOL)supportsTransport:(NSUInteger)arg0 direction:(NSUInteger)arg1 ;
-(BOOL)supportsTransport:(NSUInteger)arg0 direction:(NSUInteger)arg1 fromPlatform:(NSInteger)arg2 ;
-(NSUInteger)directionsSupportedForTransport:(NSUInteger)arg0 ;
-(NSUInteger)directionsSupportedForTransport:(NSUInteger)arg0 fromPlatform:(NSInteger)arg1 ;
-(id)init;
-(id)initWithPolicyDictionary:(id)arg0 eventClass:(Class)arg1 ;


@end


#endif