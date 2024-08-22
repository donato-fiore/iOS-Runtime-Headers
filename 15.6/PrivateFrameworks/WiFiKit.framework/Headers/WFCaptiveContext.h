// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCAPTIVECONTEXT_H
#define WFCAPTIVECONTEXT_H

@class NSString, NSTimer, WFWebSheetViewController;
@protocol WFWebSheetViewControllerDelegate, WFProviderContext, WFNetworkListRecord;

#import <Foundation/Foundation.h>


@interface WFCaptiveContext : NSObject <WFWebSheetViewControllerDelegate, WFProviderContext>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<WFNetworkListRecord> *network; // ivar: network
@property (nonatomic) BOOL readyForPresentation; // ivar: _readyForPresentation
@property (copy, nonatomic) id *readyForPresentationHandler; // ivar: _readyForPresentationHandler
@property (readonly, nonatomic) NSInteger requestedFields; // ivar: requestedFields
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (retain, nonatomic) WFWebSheetViewController *webSheetViewController; // ivar: _webSheetViewController


-(id)init;
-(void)_presentationTimerFired:(id)arg0 ;
-(void)_readyForPresentation:(id)arg0 ;
-(void)cancel;
-(void)webSheetViewController:(id)arg0 didTerminateWithError:(id)arg1 ;
-(void)webSheetViewControllerContentReadyForPresentation:(id)arg0 ;


@end


#endif