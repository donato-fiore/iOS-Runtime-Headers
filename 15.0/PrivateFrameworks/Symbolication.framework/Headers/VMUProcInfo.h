// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUPROCINFO_H
#define VMUPROCINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface VMUProcInfo : NSObject {
    unsigned int _task;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    timeval _startTime;
}


@property (readonly, nonatomic) BOOL shouldAnalyzeWithCorpse;


+(BOOL)isProcessRunning:(int)arg0 ;
+(id)getProcessIds;
+(int)processParentId:(int)arg0 ;
-(BOOL)isApp;
-(BOOL)isCFM;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMachO;
-(BOOL)isNative;
-(BOOL)isRunning;
-(BOOL)signal:(int)arg0 ;
-(BOOL)terminate;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareByName:(id)arg0 ;
-(NSInteger)compareByUserAppName:(id)arg0 ;
-(NSUInteger)hash;
-(id)_infoFromCommandLine:(int)arg0 ;
-(id)arguments;
-(id)description;
-(id)envVars;
-(id)firstArgument;
-(id)initWithPid:(int)arg0 ;
-(id)initWithTask:(unsigned int)arg0 ;
-(id)name;
-(id)platformName;
-(id)procTableName;
-(id)realAppName;
-(id)requestedAppName;
-(id)userAppName;
-(id)valueForEnvVar:(id)arg0 ;
-(int)cpuType;
-(int)pid;
-(int)ppid;
-(struct timeval )startTime;
-(unsigned int)platform;
-(unsigned int)task;
-(void)dealloc;
-(void)update;


@end


#endif