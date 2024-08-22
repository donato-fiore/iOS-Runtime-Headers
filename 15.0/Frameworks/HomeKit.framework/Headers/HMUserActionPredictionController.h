// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSERACTIONPREDICTIONCONTROLLER_H
#define HMUSERACTIONPREDICTIONCONTROLLER_H

@class NSUUID, NSArray;
@protocol HMUserActionPredictionControllerDelegate;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMUserActionPredictionController : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (retain) _HMContext *context; // ivar: _context
@property (weak) NSObject<HMUserActionPredictionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSArray *predictions;


-(BOOL)mergeWithOtherPredictionController:(id)arg0 operations:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(void)configureWithContext:(id)arg0 ;
-(void)fetchPredictionsWithCompletion:(id)arg0 ;


@end


#endif