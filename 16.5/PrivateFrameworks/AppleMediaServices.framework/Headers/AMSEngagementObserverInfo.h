// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTOBSERVERINFO_H
#define AMSENGAGEMENTOBSERVERINFO_H

@class NSSet, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSEngagementObserverInfo : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) NSSet *placements;
@property (readonly, nonatomic) NSSet *serviceTypes;
@property (retain, nonatomic) NSMutableSet *underlyingPlacements; // ivar: _underlyingPlacements
@property (retain, nonatomic) NSMutableSet *underlyingServiceTypes; // ivar: _underlyingServiceTypes


-(id)initWithQueue:(id)arg0 ;
-(void)addPlacement:(id)arg0 ;
-(void)addServiceType:(id)arg0 ;
-(void)removePlacement:(id)arg0 ;
-(void)removeServiceType:(id)arg0 ;


@end


#endif