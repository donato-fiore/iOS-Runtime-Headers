// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIDECARRESPONSE_H
#define SIDECARRESPONSE_H



#import "SidecarRequest.h"

@interface SidecarResponse : SidecarRequest {
    uint8_t _accepted;
}




-(void)_willConnect;
-(void)accept;
-(void)sendItems:(id)arg0 ;


@end


#endif