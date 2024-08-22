// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15SIRISUGGESTIONS17LOCATIONREQUESTER_H
#define _TTC15SIRISUGGESTIONS17LOCATIONREQUESTER_H

@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC15SiriSuggestions17LocationRequester : NSObject <CLLocationManagerDelegate>

 {
    ? locationManager;
    ? locationSemaphore;
    ? requestTimeOut;
}




-(id)init;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif