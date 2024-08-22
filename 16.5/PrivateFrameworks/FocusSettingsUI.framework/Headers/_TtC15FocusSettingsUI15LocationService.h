// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15FOCUSSETTINGSUI15LOCATIONSERVICE_H
#define _TTC15FOCUSSETTINGSUI15LOCATIONSERVICE_H

@protocol CLLocationManagerDelegate, MKLocalSearchCompleterDelegate;

#import <Foundation/Foundation.h>


@interface _TtC15FocusSettingsUI15LocationService : NSObject <CLLocationManagerDelegate, MKLocalSearchCompleterDelegate>

 {
    ? _queryFragment;
    ? _status;
    ? _searchResults;
    ? completionCancellable;
    ? queryCancellable;
    ? locationManager;
    ? completer;
    ? _completions;
    ? _searchCompletion;
    ? locationQueue;
    ? localRegion;
    ? searchNearCurrentLocation;
}




-(id)init;
-(void)completerDidUpdateResults:(id)arg0 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif