// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTSCENES_H
#define CHIPTESTSCENES_H



#import "CHIPScenes.h"

@interface CHIPTestScenes : CHIPScenes {
    ScenesClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentGroupWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentSceneWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNameSupportWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSceneCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSceneValidWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif