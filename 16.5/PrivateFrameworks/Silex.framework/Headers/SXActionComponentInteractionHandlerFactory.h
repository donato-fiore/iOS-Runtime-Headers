// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXACTIONCOMPONENTINTERACTIONHANDLERFACTORY_H
#define SXACTIONCOMPONENTINTERACTIONHANDLERFACTORY_H

@class NSString;
@protocol SXActionComponentInteractionHandlerFactory, SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

#import <Foundation/Foundation.h>


@interface SXActionComponentInteractionHandlerFactory : NSObject <SXActionComponentInteractionHandlerFactory>



@property (readonly, nonatomic) NSObject<SXActionManager> *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) NSObject<SXActionSerializer> *actionSerializer; // ivar: _actionSerializer
@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithActionManager:(id)arg0 actionSerializer:(id)arg1 analyticsReportingProvider:(id)arg2 ;
-(id)interactionHandlerForAction:(id)arg0 ;


@end


#endif