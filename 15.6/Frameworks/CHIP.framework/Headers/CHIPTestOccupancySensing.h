// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTOCCUPANCYSENSING_H
#define CHIPTESTOCCUPANCYSENSING_H



#import "CHIPOccupancySensing.h"

@interface CHIPTestOccupancySensing : CHIPOccupancySensing {
    OccupancySensingClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOccupancySensorTypeBitmapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOccupancySensorTypeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOccupancyWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif