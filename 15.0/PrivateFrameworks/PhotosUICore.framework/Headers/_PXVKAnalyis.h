// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXVKANALYIS_H
#define _PXVKANALYIS_H

@protocol PXVKImageAnalysis, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXVKAnalyis : NSObject

@property (readonly, nonatomic) NSObject<PXVKImageAnalysis> *analysis; // ivar: _analysis
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset


-(id)initWithAsset:(id)arg0 analysis:(id)arg1 ;


@end


#endif