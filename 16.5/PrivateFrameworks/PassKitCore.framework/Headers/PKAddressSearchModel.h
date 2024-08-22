// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKADDRESSSEARCHMODEL_H
#define PKADDRESSSEARCHMODEL_H

@class NSArray, MKLocalSearchCompleter, CNContactStore, NSString, CLGeocoder, MKLocalSearch, CLLocationManager;
@protocol MKLocalSearchCompleterDelegate, CLLocationManagerDelegate, PKAddressSearchModelDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKAddressSearchModel : NSObject <MKLocalSearchCompleterDelegate, CLLocationManagerDelegate>

 {
    NSArray *_contactsSearchResults;
    NSArray *_completionSearchResults;
}


@property (retain, nonatomic) MKLocalSearchCompleter *completer; // ivar: _completer
@property (readonly, nonatomic) NSArray *completionSearchResults;
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSArray *contactsSearchResults;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddressSearchModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLGeocoder *geocoder; // ivar: _geocoder
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKLocalSearch *localSearch; // ivar: _localSearch
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (readonly, nonatomic) NSArray *recentsSearchResults; // ivar: _recentsSearchResults
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultsQueue; // ivar: _resultsQueue
@property (readonly) Class superclass;


-(id)init;
-(void)_updateRecents:(id)arg0 ;
-(void)beginSearch:(id)arg0 ;
-(void)completerDidUpdateResults:(id)arg0 ;
-(void)endSearch;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)selectMapSearchCompletion:(id)arg0 ;


@end


#endif