// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCOMPOSITIONEXPORTER_H
#define JFXCOMPOSITIONEXPORTER_H

@class NSString, NSDate;
@protocol JFXExportDelegate, JFXCompositionPlayableElementsDataSource;

#import <Foundation/Foundation.h>

#import "JFXComposition.h"
#import "JFXReaderWriterExportController.h"

@interface JFXCompositionExporter : NSObject <JFXExportDelegate>



@property (readonly, nonatomic) NSObject<JFXCompositionPlayableElementsDataSource> *clipsDataSource; // ivar: _clipsDataSource
@property (retain, nonatomic) JFXComposition *composition; // ivar: _composition
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<JFXExportDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) JFXReaderWriterExportController *exportController; // ivar: _exportController
@property (retain) NSDate *exportEndTime; // ivar: _exportEndTime
@property (retain) NSDate *exportStartTime; // ivar: _exportStartTime
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int parentCode;
@property (readonly) Class superclass;


-(CGFloat)timeElapsedDuringExport;
-(NSUInteger)estimatedFileSizeForDuration:(int)arg0 frameRate:(CGFloat)arg1 preset:(id)arg2 ;
-(id)initWithClipsDataSource:(id)arg0 ;
-(void)cancelWithStatus:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didFinishExport:(NSInteger)arg0 ;
-(void)exportAnalyticsForSessionBegin;
-(void)exportAnalyticsForSessionCompleteWithStatus:(NSInteger)arg0 exportMachDuration:(NSUInteger)arg1 ;
-(void)exportProgressedTo:(float)arg0 ;
-(void)startWithPresets:(id)arg0 toFilePath:(id)arg1 poster:(id)arg2 ;
-(void)tearDown;


@end


#endif