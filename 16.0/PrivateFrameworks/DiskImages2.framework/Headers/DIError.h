// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIERROR_H
#define DIERROR_H


#import <Foundation/Foundation.h>


@interface DIError : NSObject



+(BOOL)failWithDIException:(*void)arg0 description:(id)arg1 error:(*id)arg2 ;
+(BOOL)failWithDIException:(*void)arg0 prefix:(id)arg1 error:(*id)arg2 ;
+(BOOL)failWithEnumValue:(NSInteger)arg0 description:(id)arg1 error:(*id)arg2 ;
+(BOOL)failWithEnumValue:(NSInteger)arg0 verboseInfo:(id)arg1 error:(*id)arg2 ;
+(BOOL)failWithOSStatus:(int)arg0 description:(id)arg1 error:(*id)arg2 ;
+(BOOL)failWithOSStatus:(int)arg0 verboseInfo:(id)arg1 error:(*id)arg2 ;
+(BOOL)failWithPOSIXCode:(int)arg0 description:(id)arg1 error:(*id)arg2 ;
+(BOOL)failWithPOSIXCode:(int)arg0 error:(*id)arg1 ;
+(BOOL)failWithPOSIXCode:(int)arg0 verboseInfo:(id)arg1 error:(*id)arg2 ;
+(BOOL)mandatoryArgumentFailWithError:(*id)arg0 ;
+(id)copyDefaultLocalizedStringForDIErrorCode:(NSInteger)arg0 ;
+(id)errorWithDIException:(*void)arg0 description:(id)arg1 prefix:(id)arg2 error:(*id)arg3 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 description:(id)arg2 verboseInfo:(id)arg3 error:(*id)arg4 ;
+(id)errorWithEnumValue:(NSInteger)arg0 verboseInfo:(id)arg1 ;
+(id)errorWithPOSIXCode:(int)arg0 verboseInfo:(id)arg1 ;
+(id)frameworkBundle;
+(id)nilWithDIException:(*void)arg0 description:(id)arg1 error:(*id)arg2 ;
+(id)nilWithDIException:(*void)arg0 prefix:(id)arg1 error:(*id)arg2 ;
+(id)nilWithEnumValue:(NSInteger)arg0 description:(id)arg1 error:(*id)arg2 ;
+(id)nilWithEnumValue:(NSInteger)arg0 verboseInfo:(id)arg1 error:(*id)arg2 ;
+(id)nilWithOSStatus:(int)arg0 verboseInfo:(id)arg1 error:(*id)arg2 ;
+(id)nilWithPOSIXCode:(int)arg0 description:(id)arg1 error:(*id)arg2 ;
+(id)nilWithPOSIXCode:(int)arg0 verboseInfo:(id)arg1 error:(*id)arg2 ;


@end


#endif