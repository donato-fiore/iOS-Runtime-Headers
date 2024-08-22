// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLOGGERBACKENDADAPTER_H
#define PFLOGGERBACKENDADAPTER_H

@class NSString;
@protocol PFLoggerBackend, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend>

 {
    uint8_t _pendingTransactionCount;
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly, nonatomic) BOOL allowsConcurrentAccess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL formatsMessage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL outputsToDebuggerConsole;
@property BOOL runningUnderDebugger; // ivar: _runningUnderDebugger
@property (readonly) Class superclass;


+(NSInteger)allFileSizeMaxBytesFromString:(id)arg0 ;
+(NSInteger)fileSizeMaxBytesFromString:(id)arg0 ;
+(NSInteger)parseByteSizeValueForKey:(id)arg0 inString:(id)arg1 ;
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg0 ;
+(id)pathWithoutParametersFromString:(id)arg0 ;
-(id)init;
-(void)beginTransaction;
-(void)endTransaction;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)logFromCodeLocation:(struct ? )arg0 facility:(id)arg1 subsystem:(id)arg2 level:(int)arg3 message:(id)arg4 format:(id)arg5 args:(char *)arg6 ;


@end


#endif