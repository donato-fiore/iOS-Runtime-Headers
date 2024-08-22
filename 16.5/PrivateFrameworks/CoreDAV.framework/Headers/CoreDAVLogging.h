// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVLOGGING_H
#define COREDAVLOGGING_H

@class NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CoreDAVLogging : NSObject {
    NSMutableDictionary *_logDelegates;
    NSMapTable *_primaryLogDelegate;
    NSObject<OS_dispatch_queue> *_delegateMuckingQueue;
}




+(id)sharedLogging;
-(BOOL)_shouldOutputAtLevel:(NSInteger)arg0 forAccountInfoProvider:(id)arg1 ;
-(BOOL)shouldLogAtLevel:(NSInteger)arg0 forAccountInfoProvider:(id)arg1 ;
-(id)_delegatesToLogForProvider:(id)arg0 ;
-(id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg0 ;
-(id)init;
-(id)logHandleForAccountInfoProvider:(id)arg0 ;
-(void)_logOldMessageForAccountInfoProvider:(id)arg0 level:(unsigned char)arg1 format:(char *)arg2 ;
-(void)addLogDelegate:(id)arg0 forAccountInfoProvider:(id)arg1 ;
-(void)logDiagnosticForProvider:(id)arg0 withLevel:(NSInteger)arg1 format:(id)arg2 args:(char *)arg3 ;
-(void)removeLogDelegate:(id)arg0 forAccountInfoProvider:(id)arg1 ;


@end


#endif