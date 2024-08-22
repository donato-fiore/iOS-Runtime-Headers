// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUCRASHHANDLER_H
#define AUCRASHHANDLER_H

@class NSString;
@protocol OSADiagnosticObserver;

#import <Foundation/Foundation.h>


@interface AUCrashHandler : NSObject <OSADiagnosticObserver>

 {
    int _watchedPid;
    id *_crashCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_bundleIdentifierIsApple:(id)arg0 ;
+(BOOL)_isAppleApplicationInPath:(id)arg0 bundle:(id)arg1 ;
+(BOOL)_pathIsApple:(id)arg0 ;
+(id)_deanonymizeUserHomePath:(id)arg0 ;
-(id)initWithPid:(int)arg0 withCrashBlock:(id)arg1 ;
-(void)dealloc;
-(void)didWriteDiagnosticLog:(id)arg0 logId:(id)arg1 logFilePath:(id)arg2 logInfo:(id)arg3 error:(id)arg4 ;
-(void)willWriteDiagnosticLog:(id)arg0 logId:(id)arg1 logInfo:(id)arg2 ;


@end


#endif