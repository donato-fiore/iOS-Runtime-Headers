// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETEFEATUREFLAGS_H
#define CRKCONCRETEFEATUREFLAGS_H

@protocol CRKFeatureFlags;

#import <Foundation/Foundation.h>


@interface CRKConcreteFeatureFlags : NSObject <CRKFeatureFlags>



@property (readonly, nonatomic, getter=isASMUserCachingEnabled) BOOL ASMUserCachingEnabled;
@property (readonly, nonatomic, getter=isDataSeparationEnabled) BOOL dataSeparationEnabled;




@end


#endif