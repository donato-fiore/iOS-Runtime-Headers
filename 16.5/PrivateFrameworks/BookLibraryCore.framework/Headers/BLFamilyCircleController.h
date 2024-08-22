// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLFAMILYCIRCLECONTROLLER_H
#define BLFAMILYCIRCLECONTROLLER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLFamilyCircleController : NSObject

@property (retain, nonatomic) NSMutableSet *cachedDSIDs; // ivar: _cachedDSIDs
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSMutableSet *ignoredDSIDs; // ivar: _ignoredDSIDs


+(id)sharedInstance;
-(id)init;
-(void)dq_processFamilyCircle:(id)arg0 completion:(id)arg1 ;
-(void)refreshWithCompletion:(id)arg0 ;


@end


#endif