// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFERRORCONTEXT_H
#define WFERRORCONTEXT_H

@class NSString, NSError, UIViewController<WFNetworkView>;
@protocol WFErrorProviderContext, WFContextPresenting, WFNetworkListRecord, WFDiagnosticsResultItem;

#import <Foundation/Foundation.h>


@interface WFErrorContext : NSObject <WFErrorProviderContext, WFContextPresenting>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsDismissal; // ivar: _needsDismissal
@property (retain, nonatomic) NSObject<WFNetworkListRecord> *network; // ivar: _network
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider; // ivar: _provider
@property (readonly, nonatomic) NSInteger requestedFields;
@property (retain, nonatomic) NSObject<WFDiagnosticsResultItem> *result; // ivar: _result
@property (readonly) Class superclass;


-(id)_userInfoForAssociationError:(id)arg0 networkName:(id)arg1 ;
-(id)initWithAssociationError:(id)arg0 network:(id)arg1 diagnosticsResult:(id)arg2 ;
-(void)cancel;


@end


#endif