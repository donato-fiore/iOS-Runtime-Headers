// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATACOLLECTIONOBSERVERSTATE_H
#define HDDATACOLLECTIONOBSERVERSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDDataCollectionObserverState : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL hasRunningWorkout; // ivar: _hasRunningWorkout
@property (readonly, nonatomic) BOOL isInBackground; // ivar: _isInBackground


+(id)dataCollectionObserverStateInBackground:(BOOL)arg0 hasRunningWorkout:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif