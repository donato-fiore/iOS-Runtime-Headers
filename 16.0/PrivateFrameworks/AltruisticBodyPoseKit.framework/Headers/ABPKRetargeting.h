// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKRETARGETING_H
#define ABPKRETARGETING_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface ABPKRetargeting : NSObject {
    NSUUID *_skeletonIdentifier;
    *CoreIKSolver _coreIKSolver;
}




-(id)_retargetSkeleton:(id)arg0 ;
-(id)init;
-(id)processData:(id)arg0 ;
-(void)dealloc;


@end


#endif