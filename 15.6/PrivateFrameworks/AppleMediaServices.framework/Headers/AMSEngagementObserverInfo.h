// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSENGAGEMENTOBSERVERINFO_H
#define AMSENGAGEMENTOBSERVERINFO_H

@class NSSet, NSMutableSet;

#import <Foundation/Foundation.h>


@interface AMSEngagementObserverInfo : NSObject

@property (readonly, nonatomic) NSSet *placements;
@property (readonly, nonatomic) NSSet *serviceTypes;
@property (retain, nonatomic) NSMutableSet *underlyingPlacements; // ivar: _underlyingPlacements
@property (retain, nonatomic) NSMutableSet *underlyingServiceTypes; // ivar: _underlyingServiceTypes


-(id)init;
-(void)addPlacement:(id)arg0 ;
-(void)addServiceType:(id)arg0 ;
-(void)removePlacement:(id)arg0 ;
-(void)removeServiceType:(id)arg0 ;


@end


#endif