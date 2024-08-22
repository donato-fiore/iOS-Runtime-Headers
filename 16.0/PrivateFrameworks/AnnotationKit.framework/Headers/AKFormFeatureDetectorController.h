// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKFORMFEATUREDETECTORCONTROLLER_H
#define AKFORMFEATUREDETECTORCONTROLLER_H

@class NSString;
@protocol AKFormFeatureDetectorDelegate;

#import <Foundation/Foundation.h>

#import "AKController.h"

@interface AKFormFeatureDetectorController : NSObject <AKFormFeatureDetectorDelegate>



@property (weak) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)detectFormFeatureAtPoint:(struct CGPoint )arg0 inPageController:(id)arg1 ;
-(BOOL)formFeature:(id)arg0 intersectsAnnotationsOnPage:(id)arg1 ;
-(BOOL)wantsDefaultFeatures;
-(CGFloat)maximumFeatureWidthForPage:(id)arg0 ;
-(id)_convertFont:(id)arg0 toSize:(CGFloat)arg1 ;
-(id)formFeatureAtPoint:(struct CGPoint )arg0 inPageController:(id)arg1 ;
-(id)initWithController:(id)arg0 ;
-(struct CGSize )defaultFeatureSizeForPage:(id)arg0 ;
-(void)createAnnotationWithFeature:(id)arg0 onPageController:(id)arg1 ;


@end


#endif