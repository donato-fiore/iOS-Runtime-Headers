// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXACTIONCOMPONENTINTERACTIONHANDLER_H
#define SXACTIONCOMPONENTINTERACTIONHANDLER_H

@class NSString;
@protocol SXPostActionHandler, SXComponentInteractionHandler, SXPreviewComponentInteractionHandler, SXAction, SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

#import <Foundation/Foundation.h>


@interface SXActionComponentInteractionHandler : NSObject <SXPostActionHandler, SXComponentInteractionHandler, SXPreviewComponentInteractionHandler>



@property (readonly, nonatomic) NSObject<SXAction> *action; // ivar: _action
@property (readonly, nonatomic) NSObject<SXActionManager> *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) NSObject<SXActionSerializer> *actionSerializer; // ivar: _actionSerializer
@property (readonly, nonatomic) NSObject<SXAnalyticsReportingProvider> *analyticsReportingProvider; // ivar: _analyticsReportingProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contextMenuForComponentView:(id)arg0 sourceRect:(struct CGRect )arg1 ;
-(id)initWithAction:(id)arg0 actionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3 ;
-(id)previewViewController;
-(id)toolTipForComponentView:(id)arg0 ;
-(void)commitViewController:(id)arg0 ;
-(void)handleInteractionType:(NSUInteger)arg0 sourceView:(id)arg1 sourceRect:(struct CGRect )arg2 ;
-(void)handledAction:(id)arg0 state:(NSUInteger)arg1 ;


@end


#endif