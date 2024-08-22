// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXCURATEDLIBRARYCONCRETEANALYSISSTATUS_H
#define _PXCURATEDLIBRARYCONCRETEANALYSISSTATUS_H

@class NSString;
@protocol PXAssetsDataSourceManagerObserver;


#import "PXCuratedLibraryAnalysisStatus.h"

@interface _PXCuratedLibraryConcreteAnalysisStatus : PXCuratedLibraryAnalysisStatus <PXAssetsDataSourceManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDeviceUnplugged;
@property (readonly) Class superclass;


-(BOOL)hasBattery;
-(NSInteger)_analyzingStateForDataSource:(id)arg0 ;
-(float)_enrichmentProgressForDataSource:(id)arg0 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_batteryStateDidChange:(id)arg0 ;
-(void)_configureBatteryMonitoring;
-(void)_updateStatusProperties;
-(void)alternateTitleIndexDidChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif