// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCERTIFICATECONTEXT_H
#define WFCERTIFICATECONTEXT_H

@class NSArray, NSString, UIViewController<WFNetworkView>;
@protocol WFCertificateProviderContext, WFContextPresenting;

#import <Foundation/Foundation.h>

#import "WFNetworkScanRecord.h"
#import "WFNetworkProfile.h"

@interface WFCertificateContext : NSObject <WFCertificateProviderContext, WFContextPresenting>



@property (retain, nonatomic) NSArray *certificateChain; // ivar: _certificateChain
@property (nonatomic) *__SecTrust certificateTrust; // ivar: _certificateTrust
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsDismissal;
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (retain, nonatomic) WFNetworkProfile *profile; // ivar: _profile
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider; // ivar: _provider
@property (nonatomic) NSInteger requestedFields; // ivar: _requestedFields
@property (readonly) Class superclass;


-(id)initWithNetwork:(id)arg0 profile:(id)arg1 certificateChain:(id)arg2 ;
-(void)accept;
-(void)cancel;
-(void)dealloc;
-(void)launchSettings;


@end


#endif