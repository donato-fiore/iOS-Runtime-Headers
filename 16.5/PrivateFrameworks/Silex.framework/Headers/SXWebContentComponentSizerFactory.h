// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXWEBCONTENTCOMPONENTSIZERFACTORY_H
#define SXWEBCONTENTCOMPONENTSIZERFACTORY_H

@class NSString;
@protocol SXComponentSizerFactory, SXDOMObjectProviding, SWLoadingPolicyProvider;

#import <Foundation/Foundation.h>


@interface SXWebContentComponentSizerFactory : NSObject <SXComponentSizerFactory>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLoadingPolicyProvider> *loadingPolicyProvider; // ivar: _loadingPolicyProvider
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)initWithDOMObjectProvider:(id)arg0 loadingPolicyProvider:(id)arg1 ;
-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;


@end


#endif