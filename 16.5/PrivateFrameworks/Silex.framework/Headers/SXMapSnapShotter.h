// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMAPSNAPSHOTTER_H
#define SXMAPSNAPSHOTTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SXMapSnapShotter : NSObject

@property (retain, nonatomic) NSMutableArray *snapshotters; // ivar: _snapshotters


+(id)serialQueue;
-(id)init;
-(id)snapShotWithOptions:(SEL)arg0 annotations:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif