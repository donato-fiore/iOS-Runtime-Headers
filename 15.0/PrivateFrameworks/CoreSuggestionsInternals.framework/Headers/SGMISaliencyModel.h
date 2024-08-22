// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMISALIENCYMODEL_H
#define SGMISALIENCYMODEL_H


#import <Foundation/Foundation.h>


@interface SGMISaliencyModel : NSObject



+(BOOL)isOverriddenAsSalient:(id)arg0 ;
+(BOOL)isOverriddenAsSalient:(id)arg0 config:(id)arg1 ;
+(BOOL)shouldProcess:(id)arg0 ;
+(BOOL)shouldProcess:(id)arg0 config:(id)arg1 ;
+(CGFloat)saliencyThreshold;
+(id)defaultModel;
+(id)getSaliencyOutputOf:(id)arg0 forArray:(id)arg1 ;
+(id)saliencyForFeatureVector:(id)arg0 ;


@end


#endif