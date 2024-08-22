// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHSAGEGEOMETRYHELPER_H
#define TSCHSAGEGEOMETRYHELPER_H

@class TSDInfoGeometry;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"

@interface TSCHSageGeometryHelper : NSObject {
    TSCHChartInfo *_chartInfo;
    TSDInfoGeometry *_importedInfoGeometry;
}




+(id)helperWithImportedChartInfo:(id)arg0 importedInfoGeometry:(id)arg1 ;
+(struct CGRect )sageChartAreaBoundsForExportWithChartInfo:(id)arg0 geometryRect:(struct CGRect )arg1 returningContainingViewportSize:(*id)arg2 ;
-(id)initWithImportedChartInfo:(id)arg0 importedInfoGeometry:(id)arg1 ;
-(struct CGSize )naturalSize;


@end


#endif