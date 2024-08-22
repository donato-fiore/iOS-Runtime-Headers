// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNARRIVALREGIONTIMER_H
#define MNARRIVALREGIONTIMER_H

@class GEOArrivalRegion, NSTimer;
@protocol MNArrivalRegionTimerDelegate;

#import <Foundation/Foundation.h>


@interface MNArrivalRegionTimer : NSObject {
    GEOArrivalRegion *_arrivalRegion;
    NSTimer *_timer;
}


@property (weak, nonatomic) NSObject<MNArrivalRegionTimerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)initWithArrivalRegion:(id)arg0 ;
-(void)dealloc;
-(void)updateForLocation:(id)arg0 ;


@end


#endif