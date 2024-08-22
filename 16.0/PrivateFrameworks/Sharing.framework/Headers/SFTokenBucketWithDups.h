// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTOKENBUCKETWITHDUPS_H
#define SFTOKENBUCKETWITHDUPS_H


#import <Foundation/Foundation.h>

#import "SFTokenBucket.h"

@interface SFTokenBucketWithDups : NSObject {
    SFTokenBucket *_bucket;
    NSUInteger _maxDups;
    *__CFArray _dups;
}




-(BOOL)acquireTokenForIdentifier:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithBucket:(id)arg0 dupHistoryLength:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif