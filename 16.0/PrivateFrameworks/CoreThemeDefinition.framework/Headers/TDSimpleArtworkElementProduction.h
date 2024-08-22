// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDSIMPLEARTWORKELEMENTPRODUCTION_H
#define TDSIMPLEARTWORKELEMENTPRODUCTION_H



#import "TDElementProduction.h"
#import "TDTemplateRenderingMode.h"

@interface TDSimpleArtworkElementProduction : TDElementProduction

@property (nonatomic) short autoscalingType;
@property (nonatomic) BOOL isFlippable;
@property (nonatomic) BOOL optOutOfThinning;
@property (nonatomic) BOOL preservesVectorRepresentation;
@property (nonatomic) BOOL recognitionImage;
@property (retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode;


-(id)associatedFileModificationDateWithDocument:(id)arg0 ;
-(void)deleteRenditionsInDocument:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 ;


@end


#endif