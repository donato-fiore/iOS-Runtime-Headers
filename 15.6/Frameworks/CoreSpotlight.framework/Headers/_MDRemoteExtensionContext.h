// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MDREMOTEEXTENSIONCONTEXT_H
#define _MDREMOTEEXTENSIONCONTEXT_H

@class MDExtensionContext, NSString;
@protocol _MDRemoteExtensionContextProtocol;


#import "CSImportExtension.h"
#import "CSIndexExtensionRequestHandler.h"

@interface _MDRemoteExtensionContext : MDExtensionContext <_MDRemoteExtensionContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSImportExtension *importExtension; // ivar: _importExtension
@property (retain, nonatomic) CSIndexExtensionRequestHandler *requestHandler; // ivar: _requestHandler
@property (readonly) Class superclass;


-(id)handleSingleFileURLRequest:(id)arg0 providerIdentifier:(id)arg1 index:(id)arg2 error:(*id)arg3 ;
-(id)hostContext;
-(void)dealloc;
-(void)getLastUpdateTimeWithCompletionHandler:(id)arg0 ;
-(void)performJob:(id)arg0 acknowledgementHandler:(id)arg1 ;


@end


#endif