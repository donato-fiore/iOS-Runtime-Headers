// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDURLSESSIONPOOL_H
#define CKDURLSESSIONPOOL_H


#import <Foundation/Foundation.h>


@interface CKDURLSessionPool : NSObject {
    int _backgroundSessionConnectionPoolLimit;
}


@property (readonly, nonatomic) int backgroundSessionConnectionPoolLimit;


+(id)backgroundSessionConnectionPoolName;
+(id)sharedURLSessionPool;
-(id)init;
-(void)_updateBackgroundSessionConnectionPoolLimit;


@end


#endif