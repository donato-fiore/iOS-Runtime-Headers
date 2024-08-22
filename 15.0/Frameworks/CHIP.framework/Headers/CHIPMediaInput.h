// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPMEDIAINPUT_H
#define CHIPMEDIAINPUT_H



#import "CHIPCluster.h"

@interface CHIPMediaInput : CHIPCluster

@property (readonly) MediaInputCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)hideInputStatus:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeMediaInputListWithResponseHandler:(id)arg0 ;
-(void)renameInput:(unsigned char)arg0 name:(id)arg1 responseHandler:(id)arg2 ;
-(void)selectInput:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)showInputStatus:(id)arg0 ;


@end


#endif