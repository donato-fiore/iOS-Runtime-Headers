// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPONENTNAVIGATIONCONTEXTIMPL_H
#define WFCOMPONENTNAVIGATIONCONTEXTIMPL_H

@class NSHashTable, UIViewController, NSString;
@protocol WFComponentNavigationContext;

#import <Foundation/Foundation.h>


@interface WFComponentNavigationContextImpl : NSObject <WFComponentNavigationContext>



@property (readonly, nonatomic) NSHashTable *componentEditingSessions; // ivar: _componentEditingSessions
@property (readonly, weak, nonatomic) UIViewController *componentHostingViewController; // ivar: _componentHostingViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithViewController:(id)arg0 ;
-(void)cancelEditingSessionsWithCompletionHandler:(id)arg0 ;
-(void)componentDidEndEditingSession:(id)arg0 ;
-(void)componentWillBeginEditingSession:(id)arg0 ;


@end


#endif