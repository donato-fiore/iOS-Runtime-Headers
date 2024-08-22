// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPONOFF_H
#define CHIPONOFF_H



#import "CHIPCluster.h"

@interface CHIPOnOff : CHIPCluster

@property (readonly) OnOffCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)configureAttributeOnOffWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)off:(id)arg0 ;
-(void)on:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeOnOffWithResponseHandler:(id)arg0 ;
-(void)reportAttributeOnOffWithResponseHandler:(id)arg0 ;
-(void)toggle:(id)arg0 ;


@end


#endif