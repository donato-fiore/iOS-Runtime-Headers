// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMAPSNAPSHOTFEATUREANNOTATION_H
#define MKMAPSNAPSHOTFEATUREANNOTATION_H

@class NSString, VKCustomFeature;
@protocol MKCustomFeatureAnnotation, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding>

 {
    NSString *_title;
    VKCustomFeature *_customFeature;
}


@property (nonatomic) ? coordinate; // ivar: _coordinate
@property (nonatomic) CGFloat course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger representation; // ivar: _representation
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)feature;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 title:(id)arg1 representation:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif