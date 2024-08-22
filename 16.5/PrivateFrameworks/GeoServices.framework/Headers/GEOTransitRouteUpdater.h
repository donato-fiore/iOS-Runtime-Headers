// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITROUTEUPDATER_H
#define GEOTRANSITROUTEUPDATER_H

@class NSSet;
@protocol GEOTransitRouteUpdaterDelegate;

#import <Foundation/Foundation.h>


@interface GEOTransitRouteUpdater : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<GEOTransitRouteUpdaterDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSSet *requests; // ivar: _requests


-(id)initWithDelegate:(id)arg0 andInitialTTL:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif