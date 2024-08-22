// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTUNITLOCALIZATION_H
#define CHIPTESTUNITLOCALIZATION_H



#import "CHIPUnitLocalization.h"

@interface CHIPTestUnitLocalization : CHIPUnitLocalization {
    UnitLocalizationClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif