// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FETCHLOGARCHIVESREPORTGENERATOR_H
#define FETCHLOGARCHIVESREPORTGENERATOR_H



#import "NetworkDiagnosticsReportGenerator.h"

@interface FetchLogArchivesReportGenerator : NetworkDiagnosticsReportGenerator



-(id)initWithQueue:(id)arg0 ;
-(void)setBaseDuration:(NSUInteger)arg0 maximumSize:(NSUInteger)arg1 ;
-(void)setDefaults;
-(void)setHighVolumeLoggersDuration:(NSUInteger)arg0 maximumSize:(NSUInteger)arg1 ;
-(void)setTTLDuration:(NSUInteger)arg0 maximumSize:(NSUInteger)arg1 ;


@end


#endif