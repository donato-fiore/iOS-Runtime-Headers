// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCLUSTERFEATUREANNOTATION_H
#define VKCLUSTERFEATUREANNOTATION_H

@class NSString;
@protocol VKCustomFeatureAnnotation;

#import <Foundation/Foundation.h>

#import "VKCustomFeature.h"

@interface VKClusterFeatureAnnotation : NSObject <VKCustomFeatureAnnotation>

 {
    VKCustomFeature *_customFeature;
}


@property (nonatomic) ? coordinate; // ivar: _coordinate
@property (nonatomic) CGFloat course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)feature;
-(id)initWithClusterNode:(*void)arg0 clusterTree:(*void)arg1 baseStyle:(*void)arg2 imageText:(id)arg3 annotationText:(id)arg4 annotationLocale:(id)arg5 ;
-(void)dealloc;


@end


#endif