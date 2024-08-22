// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDOWNLOADHANDLERSESSION_H
#define SSDOWNLOADHANDLERSESSION_H

@class NSString, NSNumber;


#import "SSDownloadSession.h"

@interface SSDownloadHandlerSession : SSDownloadSession {
    NSString *_downloadPhase;
}


@property BOOL blocksOtherDownloads;
@property BOOL canBePaused;
@property (readonly) NSString *downloadPhase;
@property (readonly) NSNumber *duetTimeoutInterval; // ivar: _duetTimeoutInterval
@property BOOL needsPowerAssertion;


-(id)_initWithMessage:(id)arg0 controlConnection:(id)arg1 ;
-(void)_finishWithType:(int)arg0 error:(id)arg1 ;
-(void)_setBool:(BOOL)arg0 forSessionProperty:(char *)arg1 ;
-(void)dealloc;
-(void)disavowSessionWithError:(id)arg0 ;
-(void)finishSessionWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)releaseSessionControl;
-(void)setPercentComplete:(float)arg0 ;
-(void)setStatusDescription:(id)arg0 ;


@end


#endif