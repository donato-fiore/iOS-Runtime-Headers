// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLOCATIONSTREAM_H
#define PXLOCATIONSTREAM_H

@class CLLocationManager, NSString;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface PXLocationStream : NSObject <CLLocationManagerDelegate>

 {
    NSUInteger _state;
    CGFloat _accuracy;
    id *_handler;
    CLLocationManager *_locationManager;
}


@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccuracy:(CGFloat)arg0 handler:(id)arg1 ;
-(void)_cleanup;
-(void)_closeStreamWithError;
-(void)_emitLocation:(id)arg0 ;
-(void)_open;
-(void)_requestAuthorization;
-(void)_requestLocation;
-(void)dealloc;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif