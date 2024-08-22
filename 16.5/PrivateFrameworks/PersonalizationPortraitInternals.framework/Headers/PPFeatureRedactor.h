// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPFEATUREREDACTOR_H
#define PPFEATUREREDACTOR_H

@class _PASLock;

#import <Foundation/Foundation.h>

#import "PPTrialWrapper.h"

@interface PPFeatureRedactor : NSObject {
    _PASLock *_lock;
    PPTrialWrapper *_trialWrapper;
}




-(id)initWithTrialWrapper:(id)arg0 namespaceName:(id)arg1 ;
-(void)transformFeaturesInPlace:(id)arg0 ;


@end


#endif