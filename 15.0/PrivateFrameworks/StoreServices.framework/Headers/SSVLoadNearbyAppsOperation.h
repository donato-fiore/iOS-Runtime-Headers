// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVLOADNEARBYAPPSOPERATION_H
#define SSVLOADNEARBYAPPSOPERATION_H

@class NSOperation, NSString, NSMutableDictionary, CLLocation;
@protocol OS_dispatch_queue;



@interface SSVLoadNearbyAppsOperation : NSOperation {
    NSString *_baseURLString;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_parameters;
    id *_responseBlock;
    NSString *_storeFrontSuffix;
    NSString *_userAgent;
}


@property (readonly) CLLocation *location; // ivar: _location
@property (copy) NSString *pointOfInterestIdentifier;
@property (copy) NSString *pointOfInterestProviderIdentifier;
@property (copy) NSString *pointOfInterestProviderURL;
@property (copy) id *responseBlock;
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSString *userAgent;


-(id)_lookupWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithBaseURL:(id)arg0 location:(id)arg1 ;
-(void)main;


@end


#endif