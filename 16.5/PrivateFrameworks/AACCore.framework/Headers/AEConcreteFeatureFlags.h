// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AECONCRETEFEATUREFLAGS_H
#define AECONCRETEFEATUREFLAGS_H

@class NSString;
@protocol AEFeatureFlags;

#import <Foundation/Foundation.h>


@interface AEConcreteFeatureFlags : NSObject <AEFeatureFlags>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isiOSAgentEnabled) BOOL iOSAgentEnabled;
@property (readonly) Class superclass;




@end


#endif