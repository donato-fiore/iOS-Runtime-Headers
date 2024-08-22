// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMOCKCURATEDLIBRARYANALYSISSTATUS_H
#define PXMOCKCURATEDLIBRARYANALYSISSTATUS_H



#import "PXCuratedLibraryAnalysisStatus.h"

@interface PXMockCuratedLibraryAnalysisStatus : PXCuratedLibraryAnalysisStatus



+(BOOL)shouldUseMock;
+(id)_mockStatus;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_updateStatusProperties;
-(void)alternateTitleIndexDidChange;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif