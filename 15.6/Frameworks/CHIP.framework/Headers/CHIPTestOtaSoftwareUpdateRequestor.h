// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTOTASOFTWAREUPDATEREQUESTOR_H
#define CHIPTESTOTASOFTWAREUPDATEREQUESTOR_H



#import "CHIPOtaSoftwareUpdateRequestor.h"

@interface CHIPTestOtaSoftwareUpdateRequestor : CHIPOtaSoftwareUpdateRequestor {
    OtaSoftwareUpdateRequestorClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUpdatePossibleWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUpdateStateProgressWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUpdateStateWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif