// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTACTIONHANDLER_H
#define SXCOMPONENTACTIONHANDLER_H

@class NSString;
@protocol SXPostActionHandler, SXComponentActionHandler, SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;


#import "SXAnalyticsEvent.h"

@interface SXComponentActionHandler : SXAnalyticsEvent <SXPostActionHandler, SXComponentActionHandler>



@property (readonly, nonatomic) NSObject<SXActionManager> *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) NSObject<SXActionSerializer> *actionSerializer; // ivar: _actionSerializer
@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithActionManager:(id)arg0 actionSerializer:(id)arg1 analyticsReportingProvider:(id)arg2 ;
-(void)handleAction:(id)arg0 sourceView:(id)arg1 sourceRect:(struct CGRect )arg2 invocationType:(NSUInteger)arg3 ;
-(void)handledAction:(id)arg0 state:(NSUInteger)arg1 ;


@end


#endif