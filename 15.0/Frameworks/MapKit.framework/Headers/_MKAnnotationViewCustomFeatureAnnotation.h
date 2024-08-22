// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKANNOTATIONVIEWCUSTOMFEATUREANNOTATION_H
#define _MKANNOTATIONVIEWCUSTOMFEATUREANNOTATION_H

@class VKCustomFeature, NSString;
@protocol VKCustomFeatureAnnotation, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MKAnnotationView.h"

@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <VKCustomFeatureAnnotation, NSSecureCoding>

 {
    VKCustomFeature *_customFeature;
}


@property (weak, nonatomic) MKAnnotationView *annotationView; // ivar: _annotationView
@property (nonatomic) ? coordinate; // ivar: _coordinate
@property (nonatomic) CGFloat course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VKCustomFeature *feature;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCustomFeature:(id)arg0 ;


@end


#endif