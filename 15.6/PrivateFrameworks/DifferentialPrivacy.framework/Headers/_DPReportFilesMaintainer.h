// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPREPORTFILESMAINTAINER_H
#define _DPREPORTFILESMAINTAINER_H

@class NSString;
@protocol _DPMaintenance;

#import <Foundation/Foundation.h>


@interface _DPReportFilesMaintainer : NSObject <_DPMaintenance>



@property (copy, nonatomic) NSString *reportsDirectoryPath; // ivar: _reportsDirectoryPath


+(BOOL)removeFilesFrom:(id)arg0 olderThanSecond:(CGFloat)arg1 ;
+(BOOL)retireFiles:(id)arg0 toDirectory:(id)arg1 ;
+(id)reportsInDirectory:(id)arg0 ;
+(id)retiredReportsPath:(id)arg0 ;
-(BOOL)doMaintenance;
-(id)init;
-(id)initWithDirectoryPath:(id)arg0 ;
-(void)scheduleMaintenanceWithName:(id)arg0 database:(id)arg1 ;


@end


#endif