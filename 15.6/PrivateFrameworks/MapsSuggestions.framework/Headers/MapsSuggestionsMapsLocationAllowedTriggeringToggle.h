// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSMAPSLOCATIONALLOWEDTRIGGERINGTOGGLE_H
#define MAPSSUGGESTIONSMAPSLOCATIONALLOWEDTRIGGERINGTOGGLE_H

@class CLLocationManager, NSString;
@protocol CLLocationManagerDelegate;


#import "MapsSuggestionsTriggeringToggle.h"

@interface MapsSuggestionsMapsLocationAllowedTriggeringToggle : MapsSuggestionsTriggeringToggle <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isTrue;
-(void)dealloc;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;


@end


#endif