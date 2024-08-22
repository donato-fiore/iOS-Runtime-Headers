// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTFEATURESFILTERV1_H
#define CRTEXTFEATURESFILTERV1_H

@protocol CRTextFeaturesFiltering;

#import <Foundation/Foundation.h>


@interface CRTextFeaturesFilterV1 : NSObject <CRTextFeaturesFiltering>





-(id)filterBlocks:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)filterFeatures:(id)arg0 ;


@end


#endif