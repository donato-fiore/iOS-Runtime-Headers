// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPWALRUSSTATECONTROLLER_H
#define CDPWALRUSSTATECONTROLLER_H

@class NSString;
@protocol CDPWalrusStatusProvider;

#import <Foundation/Foundation.h>

#import "CDPContext.h"

@interface CDPWalrusStateController : NSObject <CDPWalrusStatusProvider>

 {
    CDPContext *_context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldOpenGate;
-(NSUInteger)walrusStatus:(*id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)_startObservingWalrusStateChangeNotification;
-(void)broadcastWalrusStateChange;
-(void)pcsKeysForServices:(id)arg0 completion:(id)arg1 ;
-(void)repairWalrusStatusWithCompletion:(id)arg0 ;
-(void)updateWalrusStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)walrusStatusWithCompletion:(id)arg0 ;


@end


#endif