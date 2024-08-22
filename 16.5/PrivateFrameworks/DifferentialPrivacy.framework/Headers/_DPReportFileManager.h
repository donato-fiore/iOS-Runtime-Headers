// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPREPORTFILEMANAGER_H
#define _DPREPORTFILEMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_DPDaemonConnection.h"

@interface _DPReportFileManager : NSObject

@property (readonly, nonatomic) _DPDaemonConnection *connection; // ivar: _connection
@property (copy, nonatomic) NSString *reportsDirectoryPath; // ivar: _reportsDirectoryPath


+(id)submittedReports;
+(id)submittedReportsInDirectory:(id)arg0 ;
-(id)init;
-(id)initWithDirectoryPath:(id)arg0 ;
-(id)reportsNotYetSubmitted;
-(void)dealloc;
-(void)retireReports:(id)arg0 ;


@end


#endif