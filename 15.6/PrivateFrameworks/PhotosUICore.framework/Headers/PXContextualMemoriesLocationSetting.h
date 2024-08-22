// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTEXTUALMEMORIESLOCATIONSETTING_H
#define PXCONTEXTUALMEMORIESLOCATIONSETTING_H

@class NSString, CLLocation, CLPlacemark;
@protocol _PXCompletionHandlerManagerDelegate, PXContextualMemoriesSetting, MKAnnotation;

#import <Foundation/Foundation.h>

#import "_PXCompletionHandlerManager.h"
#import "PXLocationStream.h"

@interface PXContextualMemoriesLocationSetting : NSObject <_PXCompletionHandlerManagerDelegate, PXContextualMemoriesSetting, MKAnnotation>



@property (retain, nonatomic) _PXCompletionHandlerManager *completionHandlerManager; // ivar: _completionHandlerManager
@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) CLLocation *location;
@property (nonatomic) NSUInteger locationState; // ivar: _locationState
@property (retain, nonatomic) PXLocationStream *locationStream; // ivar: _locationStream
@property (nonatomic) BOOL monitorsCurrentLocation; // ivar: _monitorsCurrentLocation
@property (retain, nonatomic) CLPlacemark *placemark; // ivar: _placemark
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


+(BOOL)automaticallyNotifiesObserversOfCoordinate;
+(id)keyPathsForValuesAffectingPlacemark;
+(id)keyPathsForValuesAffectingTitle;
+(struct CLLocationCoordinate2D )_simulatedLocationCoordinate;
+(void)_setSimulatedLocationCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(id)_locationForCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(id)init;
-(void)_handleLocationAcquisitionUpdate:(id)arg0 ;
-(void)_initiateLocationAcquisitionWithAccuracy:(CGFloat)arg0 ;
-(void)_updatePlacemarkForCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)_updatePlacemarkWithPlacemarks:(id)arg0 error:(id)arg1 ;
-(void)didCallLastCompletionHandlerForCompletionHandlerManager:(id)arg0 ;
-(void)requestLocationUpdateWithAccuracy:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)resetToDefault;


@end


#endif