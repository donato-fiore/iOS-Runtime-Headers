// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITVEHICLEUPDATER_H
#define GEOTRANSITVEHICLEUPDATER_H

@class NSSet;
@protocol GEOTransitVehicleUpdaterDelegate;

#import <Foundation/Foundation.h>


@interface GEOTransitVehicleUpdater : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<GEOTransitVehicleUpdaterDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSSet *tripIDs; // ivar: _tripIDs


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;


@end


#endif