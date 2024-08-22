// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPTESTCLUSTER_H
#define CHIPTESTCLUSTER_H



#import "CHIPCluster.h"

@interface CHIPTestCluster : CHIPCluster

@property (readonly) TestClusterCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeBitmap16WithResponseHandler:(id)arg0 ;
-(void)readAttributeBitmap32WithResponseHandler:(id)arg0 ;
-(void)readAttributeBitmap64WithResponseHandler:(id)arg0 ;
-(void)readAttributeBitmap8WithResponseHandler:(id)arg0 ;
-(void)readAttributeBooleanWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeEnum16WithResponseHandler:(id)arg0 ;
-(void)readAttributeEnum8WithResponseHandler:(id)arg0 ;
-(void)readAttributeInt16sWithResponseHandler:(id)arg0 ;
-(void)readAttributeInt16uWithResponseHandler:(id)arg0 ;
-(void)readAttributeInt32sWithResponseHandler:(id)arg0 ;
-(void)readAttributeInt32uWithResponseHandler:(id)arg0 ;
-(void)readAttributeInt64sWithResponseHandler:(id)arg0 ;
-(void)readAttributeInt64uWithResponseHandler:(id)arg0 ;
-(void)readAttributeInt8sWithResponseHandler:(id)arg0 ;
-(void)readAttributeInt8uWithResponseHandler:(id)arg0 ;
-(void)readAttributeListInt8uWithResponseHandler:(id)arg0 ;
-(void)readAttributeListOctetStringWithResponseHandler:(id)arg0 ;
-(void)readAttributeListStructOctetStringWithResponseHandler:(id)arg0 ;
-(void)readAttributeOctetStringWithResponseHandler:(id)arg0 ;
-(void)test:(id)arg0 ;
-(void)testNotHandled:(id)arg0 ;
-(void)testSpecific:(id)arg0 ;
-(void)testUnknownCommand:(id)arg0 ;
-(void)writeAttributeBitmap16WithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeBitmap32WithValue:(unsigned int)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeBitmap64WithValue:(NSUInteger)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeBitmap8WithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeBooleanWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeEnum16WithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeEnum8WithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeInt16sWithValue:(short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeInt16uWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeInt32sWithValue:(int)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeInt32uWithValue:(unsigned int)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeInt64sWithValue:(NSInteger)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeInt64uWithValue:(NSUInteger)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeInt8sWithValue:(char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeInt8uWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeOctetStringWithValue:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif