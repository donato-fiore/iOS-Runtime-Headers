// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VEKPRODUCTIONEXPORT_H
#define VEKPRODUCTIONEXPORT_H


#import <Foundation/Foundation.h>

#import "VEKExportController.h"

@interface VEKProductionExport : NSObject

@property (retain, nonatomic) VEKExportController *exportController; // ivar: _exportController


// -(void)_exportProject:(id)arg0 presets:(id)arg1 progressHandler:(id)arg2 title:(unk)arg3 subtitle:(id)arg4 fontName:(id)arg5 completionHandler:(id)arg6  ;
-(void)didFinishExport;
-(void)exportController:(id)arg0 progressedTo:(float)arg1 preventBackslide:(BOOL)arg2 ;
// -(void)exportWithPresets:(id)arg0 progressHandler:(id)arg1 project:(unk)arg2 title:(id)arg3 subtitle:(id)arg4 fontName:(id)arg5 completionHandler:(id)arg6  ;


@end


#endif