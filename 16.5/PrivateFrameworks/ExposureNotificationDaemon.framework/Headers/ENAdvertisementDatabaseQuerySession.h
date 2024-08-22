// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENADVERTISEMENTDATABASEQUERYSESSION_H
#define ENADVERTISEMENTDATABASEQUERYSESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENAdvertisementDatabase.h"

@interface ENAdvertisementDatabaseQuerySession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _tekCount;
}


@property (readonly, nonatomic) unsigned char attenuationThreshold; // ivar: _attenuationThreshold
@property (readonly, nonatomic) ENAdvertisementDatabase *database; // ivar: _database
@property (readonly, nonatomic) unsigned int storedAdvertisementCount; // ivar: _storedAdvertisementCount


-(BOOL)enumerateAdvertisementsMatchingKeys:(id)arg0 attenuationThreshold:(unsigned char)arg1 timestampTolerance:(CGFloat)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(id)beaconCountMetricsWithStartDate:(id)arg0 endDate:(id)arg1 windowDuration:(CGFloat)arg2 error:(*id)arg3 ;
-(id)initWithDatabase:(id)arg0 attenuationThreshold:(unsigned char)arg1 advertisementCount:(unsigned int)arg2 queue:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif