// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSBIOMEDONATIONMANAGER_H
#define DNDSBIOMEDONATIONMANAGER_H

@class BMUserFocusComputedModeStream;

#import <Foundation/Foundation.h>


@interface DNDSBiomeDonationManager : NSObject {
    BMUserFocusComputedModeStream *_computedModeStream;
}




-(id)init;
-(void)_donateEventForStateUpdate:(id)arg0 ;
-(void)handleStateUpdate:(id)arg0 ;


@end


#endif