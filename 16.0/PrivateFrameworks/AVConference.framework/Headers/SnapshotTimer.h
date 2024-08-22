// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNAPSHOTTIMER_H
#define SNAPSHOTTIMER_H


#import <Foundation/Foundation.h>


@interface SnapshotTimer : NSObject

@property (nonatomic) BOOL taskIsComplete; // ivar: taskIsComplete


+(void)takeSnapshotForTask:(id)arg0 ;
-(id)init;
-(void)checkinWithTimeout:(CGFloat)arg0 forTask:(id)arg1 ;
-(void)checkout;


@end


#endif