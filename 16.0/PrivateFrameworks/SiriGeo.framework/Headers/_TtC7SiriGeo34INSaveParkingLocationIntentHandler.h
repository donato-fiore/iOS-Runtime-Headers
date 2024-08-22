// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SIRIGEO34INSAVEPARKINGLOCATIONINTENTHANDLER_H
#define _TTC7SIRIGEO34INSAVEPARKINGLOCATIONINTENTHANDLER_H

@protocol INSaveParkingLocationIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC7SiriGeo34INSaveParkingLocationIntentHandler : NSObject <INSaveParkingLocationIntentHandling>

 {
    ? logObject;
    ? locationController;
    ? completion;
}




-(id)init;
-(void)dealloc;
-(void)handleSaveParkingLocation:(id)arg0 completion:(id)arg1 ;
-(void)resolveParkingLocationForSaveParkingLocation:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif