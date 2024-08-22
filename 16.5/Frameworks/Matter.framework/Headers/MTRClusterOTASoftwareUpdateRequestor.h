// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTEROTASOFTWAREUPDATEREQUESTOR_H
#define MTRCLUSTEROTASOFTWAREUPDATEREQUESTOR_H



#import "MTRClusterOTASoftwareUpdateRequestor.h"

@interface MTRClusterOtaSoftwareUpdateRequestor : MTRClusterOTASoftwareUpdateRequestor



-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)readAttributeDefaultOtaProvidersWithParams:(id)arg0 ;
-(void)announceOtaProviderWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeDefaultOtaProvidersWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeDefaultOtaProvidersWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif