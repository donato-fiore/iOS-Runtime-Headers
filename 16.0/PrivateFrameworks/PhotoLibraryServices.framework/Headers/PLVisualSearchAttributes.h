// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLVISUALSEARCHATTRIBUTES_H
#define PLVISUALSEARCHATTRIBUTES_H

@class NSDate, NSData;


#import "PLManagedObject.h"
#import "PLMediaAnalysisAssetAttributes.h"

@interface PLVisualSearchAttributes : PLManagedObject

@property (retain, nonatomic) NSDate *adjustmentVersion;
@property (nonatomic) short algorithmVersion;
@property (retain, nonatomic) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;
@property (retain, nonatomic) NSData *visualSearchData;


+(id)entityName;


@end


#endif