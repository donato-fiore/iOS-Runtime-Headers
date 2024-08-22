// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNAINLINEDRAWINGRECOGNITIONREPORTER_H
#define ICNAINLINEDRAWINGRECOGNITIONREPORTER_H

@class NSMutableDictionary;


#import "ICNAObject.h"

@interface ICNAInlineDrawingRecognitionReporter : ICNAObject

@property (retain, nonatomic) NSMutableDictionary *stagedReports; // ivar: _stagedReports


+(id)sharedReporter;
-(id)init;
-(void)createReportForDrawing:(id)arg0 drawingID:(id)arg1 insideNote:(id)arg2 ;
-(void)dealloc;
-(void)reportNotification:(id)arg0 ;
-(void)submitReports;


@end


#endif