// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBCLLOCATIONMANAGER_H
#define WEBCLLOCATIONMANAGER_H

@class NSString;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface WebCLLocationManager : NSObject <CLLocationManagerDelegate>

 {
    RetainPtr<CLLocationManager> _locationManager;
    *Client _client;
    String _websiteIdentifier;
    BOOL _isWaitingForAuthorization;
    BOOL _mode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWebsiteIdentifier:(*void)arg0 client:(struct Client *)arg1 mode:(BOOL)arg2 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)setEnableHighAccuracy:(BOOL)arg0 ;
-(void)stop;


@end


#endif