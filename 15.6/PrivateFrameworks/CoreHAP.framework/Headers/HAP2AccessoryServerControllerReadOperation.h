// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERCONTROLLERREADOPERATION_H
#define HAP2ACCESSORYSERVERCONTROLLERREADOPERATION_H

@class NSIndexSet;


#import "HAP2AccessoryServerControllerOperation.h"
#import "HAP2ControllerReadRequest.h"

@interface HAP2AccessoryServerControllerReadOperation : HAP2AccessoryServerControllerOperation {
    NSIndexSet *_cachedCharacteristicIndices;
    HAP2ControllerReadRequest *_readRequest;
}




-(id)initWithName:(id)arg0 controller:(id)arg1 encoding:(id)arg2 transport:(id)arg3 readRequest:(id)arg4 endpoint:(id)arg5 mimeType:(id)arg6 timeout:(CGFloat)arg7 options:(NSUInteger)arg8 ;
-(void)_cleanUp;
-(void)_sendRequest;


@end


#endif