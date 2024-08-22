// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSPOINTOFINTERESTANNOTATION_H
#define CPSPOINTOFINTERESTANNOTATION_H

@class NSString, CPPointOfInterest;
@protocol MKAnnotation;

#import <Foundation/Foundation.h>


@interface CPSPointOfInterestAnnotation : NSObject <MKAnnotation>



@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPPointOfInterest *pointOfInterest; // ivar: _pointOfInterest
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(id)initWithPointOfInterest:(id)arg0 ;


@end


#endif