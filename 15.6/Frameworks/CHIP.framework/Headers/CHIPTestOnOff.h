// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTONOFF_H
#define CHIPTESTONOFF_H



#import "CHIPOnOff.h"

@interface CHIPTestOnOff : CHIPOnOff {
    OnOffClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGlobalSceneControlWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOnOffWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif