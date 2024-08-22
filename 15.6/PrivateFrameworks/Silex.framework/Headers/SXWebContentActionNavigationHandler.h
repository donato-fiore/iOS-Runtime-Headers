// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXWEBCONTENTACTIONNAVIGATIONHANDLER_H
#define SXWEBCONTENTACTIONNAVIGATIONHANDLER_H

@class NSString;
@protocol SWNavigationHandler, SXActionManager, SXActionProvider;

#import <Foundation/Foundation.h>


@interface SXWebContentActionNavigationHandler : NSObject <SWNavigationHandler>



@property (readonly, nonatomic) NSObject<SXActionManager> *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) NSObject<SXActionProvider> *actionProvider; // ivar: _actionProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)handleRequest:(id)arg0 ;
-(id)initWithActionProvider:(id)arg0 actionManager:(id)arg1 ;


@end


#endif