// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VGEXTERNALACCESSORYMODELFILTER_H
#define VGEXTERNALACCESSORYMODELFILTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VGExternalAccessoryModelFilter : NSObject {
    NSArray *_modelIdAllowlist;
    NSArray *_denylist;
}




-(BOOL)allowsVehicleWithModelId:(id)arg0 firmwareId:(id)arg1 year:(id)arg2 model:(id)arg3 ;
-(id)init;
-(void)_initializeAllowAndDenylists;


@end


#endif