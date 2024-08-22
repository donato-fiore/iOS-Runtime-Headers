// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMAPFEATUREANNOTATION_H
#define MKMAPFEATUREANNOTATION_H

@class NSString, VKLabelMarker;
@protocol MKAnnotation;

#import <Foundation/Foundation.h>

#import "MKIconStyle.h"

@interface MKMapFeatureAnnotation : NSObject <MKAnnotation>

 {
    BOOL _isHybridMap;
}


@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger featureType; // ivar: _featureType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKIconStyle *iconStyle; // ivar: _iconStyle
@property (readonly, nonatomic) VKLabelMarker *marker; // ivar: _marker
@property (readonly, nonatomic) NSString *pointOfInterestCategory; // ivar: _pointOfInterestCategory
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(id)initWithVKLabelMarker:(id)arg0 isHybridMap:(BOOL)arg1 ;
-(void)_setProperties;


@end


#endif