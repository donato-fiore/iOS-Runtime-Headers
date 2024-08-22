// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DISKIMAGES2_H
#define DISKIMAGES2_H


#import <Foundation/Foundation.h>


@interface DiskImages2 : NSObject



+(BOOL)attachWithParams:(id)arg0 handle:(*id)arg1 error:(*id)arg2 ;
+(BOOL)convertWithParams:(id)arg0 error:(*id)arg1 ;
+(BOOL)createBlankWithParams:(id)arg0 error:(*id)arg1 ;
+(BOOL)debugLogsEnabled;
+(BOOL)embedUserDataWithParams:(id)arg0 error:(*id)arg1 ;
+(BOOL)forwardLogs;
+(BOOL)managedAttachWithParams:(id)arg0 handle:(*id)arg1 error:(*id)arg2 ;
+(BOOL)retrieveUserDataWithParams:(id)arg0 error:(*id)arg1 ;
+(BOOL)verifyWithParams:(id)arg0 error:(*id)arg1 ;
+(id)imageURLFromDevice:(id)arg0 error:(*id)arg1 ;
+(void)setDebugLogsEnabled:(BOOL)arg0 ;
+(void)setForwardLogs:(BOOL)arg0 ;


@end


#endif