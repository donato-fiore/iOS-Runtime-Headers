// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBACTIONHANDLER_H
#define SBACTIONHANDLER_H

@class NSHashTable, NSString;
@protocol SBFActionProviding;

#import <Foundation/Foundation.h>


@interface SBActionHandler : NSObject <SBFActionProviding>

 {
    BOOL _capturingDisplayDump;
    NSHashTable *_externalHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldPromptForSecureDrawViolations;
-(void)_captureRadarAttachmentsWithCompletion:(id)arg0 ;
-(void)_executeRestartAction:(id)arg0 fromProcess:(id)arg1 ;
-(void)_reportAndKillInsecureProcesses:(id)arg0 ;
-(void)addActionHandler:(id)arg0 ;
-(void)handleActions:(id)arg0 origin:(id)arg1 withResult:(id)arg2 ;
-(void)removeActionHandler:(id)arg0 ;


@end


#endif