// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTMODESELECT_H
#define CHIPTESTMODESELECT_H



#import "CHIPModeSelect.h"

@interface CHIPTestModeSelect : CHIPModeSelect {
    ModeSelectClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentModeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDescriptionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeStandardNamespaceWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSupportedModesWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif