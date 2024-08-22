// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKUSERREPORTEDTRAFFICINCIDENT_H
#define VKUSERREPORTEDTRAFFICINCIDENT_H



#import "VKTrafficFeature.h"

@interface VKUserReportedTrafficIncident : VKTrafficFeature

@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithIncidentType:(NSInteger)arg0 uniqueIdentifier:(id)arg1 position:(struct ? )arg2 onRoute:(id)arg3 ;


@end


#endif