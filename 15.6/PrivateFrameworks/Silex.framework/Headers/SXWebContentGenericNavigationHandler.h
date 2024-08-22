// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXWEBCONTENTGENERICNAVIGATIONHANDLER_H
#define SXWEBCONTENTGENERICNAVIGATIONHANDLER_H

@class NSString;
@protocol SWNavigationHandler, SXURLActionFactory, SXActionManager;

#import <Foundation/Foundation.h>


@interface SXWebContentGenericNavigationHandler : NSObject <SWNavigationHandler>



@property (readonly, nonatomic) NSObject<SXURLActionFactory> *URLActionFactory; // ivar: _URLActionFactory
@property (readonly, nonatomic) NSObject<SXActionManager> *actionManager; // ivar: _actionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)handleRequest:(id)arg0 ;
-(id)actionForRequest:(id)arg0 ;
-(id)initWithActionManager:(id)arg0 URLActionFactory:(id)arg1 ;
-(id)previewViewControllerForRequest:(id)arg0 ;
-(void)commitViewController:(id)arg0 URLRequest:(id)arg1 ;


@end


#endif