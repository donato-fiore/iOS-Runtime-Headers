// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPSFILEUTILITY_H
#define IPSFILEUTILITY_H


#import <Foundation/Foundation.h>


@interface IpsFileUtility : NSObject



+(id)_createDataForCrashReporterIpsHeaderWithBugType:(id)arg0 contentType:(id)arg1 date:(id)arg2 additionalFields:(id)arg3 ;
+(id)_createIpsFileNameWithPrefix:(id)arg0 date:(id)arg1 inDirectory:(id)arg2 ;
+(id)formattedDateForFilename:(id)arg0 ;
-(BOOL)_checkDirectoryAndCreateIfNecessary:(id)arg0 ;
-(BOOL)_writeIpsFileWithBugType:(id)arg0 contentType:(id)arg1 additionalIpsHeaders:(id)arg2 ipsData:(id)arg3 inDirectory:(id)arg4 fileNamePrefix:(id)arg5 ;
-(BOOL)createIpsFileWithBugType:(id)arg0 contentType:(id)arg1 additionalIpsHeaders:(id)arg2 ipsContent:(id)arg3 inDirectory:(id)arg4 fileNamePrefix:(id)arg5 ;
-(BOOL)createIpsFileWithBugType:(id)arg0 contentType:(id)arg1 additionalIpsHeaders:(id)arg2 ipsData:(id)arg3 inDirectory:(id)arg4 fileNamePrefix:(id)arg5 ;
-(void)dealloc;


@end


#endif