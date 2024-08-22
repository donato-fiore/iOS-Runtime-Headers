// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERCONTROLLERATTRIBUTEREQUESTOPERATION_H
#define HAP2ACCESSORYSERVERCONTROLLERATTRIBUTEREQUESTOPERATION_H



#import "HAP2AccessoryServerControllerOperation.h"
#import "HAP2AccessoryServerAccessoryCache.h"

@interface HAP2AccessoryServerControllerAttributeRequestOperation : HAP2AccessoryServerControllerOperation {
    HAP2AccessoryServerAccessoryCache *_cache;
}




+(id)_characteristicsFromCachedCharacteristics:(id)arg0 ;
+(id)_parseCache:(id)arg0 ;
-(void)_cleanUp;
-(void)_sendRequest;
-(void)main;


@end


#endif