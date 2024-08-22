// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSOFTISPPROCESSORCONTROLLERREQUEST_H
#define BWSOFTISPPROCESSORCONTROLLERREQUEST_H



#import "BWStillImageProcessorControllerRequest.h"

@interface BWSoftISPProcessorControllerRequest : BWStillImageProcessorControllerRequest {
    NSUInteger _uniqueID;
}


@property (readonly, nonatomic) NSUInteger uniqueID;


-(BOOL)readyForProcessing;
-(id)description;
-(id)initWithInput:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;


@end


#endif