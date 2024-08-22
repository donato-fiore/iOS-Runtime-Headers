// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUPLANETRACKERANNOTATIONVIEW_H
#define FUPLANETRACKERANNOTATIONVIEW_H

@class MKAnnotationView, NSString, NSMutableArray;
@protocol MKAnnotation;



@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation>

 {
    BOOL _showsPlane;
}


@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly) CLLocationCoordinate2D currentLocation;
@property (nonatomic) CGFloat currentProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CLLocationCoordinate2D endLocation;
@property (readonly) NSUInteger hash;
@property (nonatomic) CLLocationCoordinate2D startLocation;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (retain) NSMutableArray *viewAddedBlock; // ivar: _viewAddedBlock


+(Class)layerClass;
+(id)defaultAnotation;
-(id)init;
-(id)planeLayer;
-(void)didMoveToSuperview;
-(void)notifyWhenIsVisibleWithBlock:(id)arg0 ;
-(void)setPlaneImage:(id)arg0 ;
-(void)setShowsPlane:(BOOL)arg0 ;
-(void)setStartLatitude:(CGFloat)arg0 startLongitude:(CGFloat)arg1 endLatitude:(CGFloat)arg2 endLongitude:(CGFloat)arg3 ;


@end


#endif