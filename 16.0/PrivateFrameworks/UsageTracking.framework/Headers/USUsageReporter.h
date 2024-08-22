// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USUSAGEREPORTER_H
#define USUSAGEREPORTER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface USUsageReporter : NSObject

@property (readonly) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)getLocalDeviceIdentifierAndReturnError:(*id)arg0 ;
+(void)synchronizeUsageWithCompletionHandler:(id)arg0 ;
-(id)fetchUsageForApplications:(id)arg0 webDomains:(id)arg1 categories:(id)arg2 interval:(id)arg3 error:(*id)arg4 ;
-(id)getLocalDeviceIdentifierAndReturnError:(*id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)fetchReportsDuringInterval:(id)arg0 partitionInterval:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)fetchReportsDuringInterval:(id)arg0 partitionInterval:(CGFloat)arg1 forceImmediateSync:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif