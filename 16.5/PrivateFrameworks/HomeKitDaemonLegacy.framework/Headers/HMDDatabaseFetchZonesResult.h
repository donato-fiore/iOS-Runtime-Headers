// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDATABASEFETCHZONESRESULT_H
#define HMDDATABASEFETCHZONESRESULT_H

@class HMBCloudZone, HMBLocalZone;

#import <Foundation/Foundation.h>


@interface HMDDatabaseFetchZonesResult : NSObject

@property (readonly) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly) HMBLocalZone *localZone; // ivar: _localZone


-(id)initWithLocalZone:(id)arg0 cloudZone:(id)arg1 ;


@end


#endif