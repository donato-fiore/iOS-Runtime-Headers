// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMAPSNAPSHOTCUSTOMFEATUREANNOTATION_H
#define MKMAPSNAPSHOTCUSTOMFEATUREANNOTATION_H

@class NSString;
@protocol MKCustomFeatureAnnotation, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_MKAnnotationViewCustomFeatureAnnotation.h"

@interface MKMapSnapshotCustomFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding>



@property (nonatomic) ? coordinate;
@property (nonatomic) CGFloat course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKAnnotationViewCustomFeatureAnnotation *internalCustomFeatureAnnotation; // ivar: _internalCustomFeatureAnnotation
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)customFeatureAnnotationForMapItem:(id)arg0 ;
+(id)customFeatureAnnotationForMapItem:(id)arg0 styleAttributes:(id)arg1 ;
+(id)customFeatureAnnotationForMapItem:(id)arg0 styleAttributes:(id)arg1 suppressLabel:(BOOL)arg2 ;
-(id)feature;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomFeature:(id)arg0 coordinate:(struct ? )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif