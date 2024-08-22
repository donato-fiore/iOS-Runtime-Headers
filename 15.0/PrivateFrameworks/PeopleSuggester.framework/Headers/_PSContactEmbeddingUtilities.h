// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCONTACTEMBEDDINGUTILITIES_H
#define _PSCONTACTEMBEDDINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface _PSContactEmbeddingUtilities : NSObject



+(id)loadFeaturesDictFromPath:(id)arg0 ;
+(id)loadModelFromUrlResource:(id)arg0 ;
+(id)modelFeatures;
+(id)modelFeaturesBackup;
+(id)prepareFeatureInputFromFeatureDict:(id)arg0 ;


@end


#endif