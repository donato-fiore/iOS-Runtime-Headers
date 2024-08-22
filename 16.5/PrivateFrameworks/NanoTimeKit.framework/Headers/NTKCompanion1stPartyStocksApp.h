// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPANION1STPARTYSTOCKSAPP_H
#define NTKCOMPANION1STPARTYSTOCKSAPP_H

@class CLKDevice;


#import "NTKCompanion3rdPartyApp.h"

@interface NTKCompanion1stPartyStocksApp : NTKCompanion3rdPartyApp {
    CLKDevice *_device;
}




-(id)complication;
-(id)initWithDevice:(id)arg0 ;
-(void)install;


@end


#endif