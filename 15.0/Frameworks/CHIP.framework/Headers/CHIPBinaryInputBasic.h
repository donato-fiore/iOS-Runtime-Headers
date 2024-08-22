// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPBINARYINPUTBASIC_H
#define CHIPBINARYINPUTBASIC_H



#import "CHIPCluster.h"

@interface CHIPBinaryInputBasic : CHIPCluster

@property (readonly) BinaryInputBasicCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)configureAttributePresentValueWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)configureAttributeStatusFlagsWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeOutOfServiceWithResponseHandler:(id)arg0 ;
-(void)readAttributePresentValueWithResponseHandler:(id)arg0 ;
-(void)readAttributeStatusFlagsWithResponseHandler:(id)arg0 ;
-(void)reportAttributePresentValueWithResponseHandler:(id)arg0 ;
-(void)reportAttributeStatusFlagsWithResponseHandler:(id)arg0 ;
-(void)writeAttributeOutOfServiceWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributePresentValueWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;


@end


#endif