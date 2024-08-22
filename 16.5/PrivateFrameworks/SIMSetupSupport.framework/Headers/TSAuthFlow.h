// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAUTHFLOW_H
#define TSAUTHFLOW_H

@class LAContext, NSString, NSData;
@protocol TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"

@interface TSAuthFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>



@property (retain, nonatomic) LAContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSData *externalizedContext; // ivar: _externalizedContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)firstViewController;
-(id)initWithExternalizedContext:(id)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)firstViewController:(id)arg0 ;


@end


#endif