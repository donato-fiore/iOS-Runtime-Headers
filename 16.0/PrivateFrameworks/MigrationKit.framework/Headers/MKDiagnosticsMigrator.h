// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKDIAGNOSTICSMIGRATOR_H
#define MKDIAGNOSTICSMIGRATOR_H

@class NSString;


#import "MKMigrator.h"

@interface MKDiagnosticsMigrator : MKMigrator {
    NSString *_basePath;
    NSString *_performanceMetricsPath;
}




-(id)init;
-(id)pathForPerformanceMetrics;
-(id)saveData:(id)arg0 toFile:(id)arg1 ;
-(void)saveData:(id)arg0 fileName:(id)arg1 ;
-(void)savePerformanceMetrics:(id)arg0 ;


@end


#endif