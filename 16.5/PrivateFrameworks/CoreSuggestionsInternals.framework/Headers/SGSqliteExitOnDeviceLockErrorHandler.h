// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSQLITEEXITONDEVICELOCKERRORHANDLER_H
#define SGSQLITEEXITONDEVICELOCKERRORHANDLER_H

@class PASSqliteDefaultErrorHandler;



@interface SGSqliteExitOnDeviceLockErrorHandler : PASSqliteDefaultErrorHandler {
    int _exitCode;
}




// -(BOOL)handleSqliteError:(int)arg0 error:(id)arg1 onError:(id)arg2 db:(unk)arg3  ;
-(id)initWithExitCode:(int)arg0 ;
-(void)exitOnErrorIndicatingIOError:(int)arg0 ;


@end


#endif