// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef E911LOCATIONSELECTOR_H
#define E911LOCATIONSELECTOR_H

@class NSBundle, CLEmergencyLocationSelector, CLEmergencyLocationSelectorConfig;
@protocol CLEmergencyLocationSelectorDelegate;

#import <Foundation/Foundation.h>


@interface E911LocationSelector : NSObject <CLEmergencyLocationSelectorDelegate>

 {
    NSBundle *_bundle;
    CLEmergencyLocationSelector *_location;
    CLEmergencyLocationSelectorConfig *_config;
    *ImsLocationSelectorDelegate _delegate;
    unsigned int _confidence;
}




-(id)initWithDelegate:(struct ImsLocationSelectorDelegate *)arg0 sipStack:(*void)arg1 updateMode:(int)arg2 dispatchQueue:(struct dispatch_queue_s *)arg3 ;
-(void)dealloc;
-(void)locationSelectorDidSelectLocation:(id)arg0 ;


@end


#endif