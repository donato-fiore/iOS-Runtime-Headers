// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRXMLPROBLEMREPORTINGCONTEXT_H
#define XRXMLPROBLEMREPORTINGCONTEXT_H

@class NSFileHandle, NSURL;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface XRXMLProblemReportingContext : NSObject

@property (retain, nonatomic) NSFileHandle *errorFile; // ivar: _errorFile
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) BOOL passed; // ivar: _passed
@property (copy, nonatomic) NSURL *urlBeingParsed; // ivar: _urlBeingParsed


-(id)init;
-(void)reportProblemWithElement:(id)arg0 failure:(id)arg1 ;
-(void)reportWarningWithElement:(id)arg0 failure:(id)arg1 ;


@end


#endif