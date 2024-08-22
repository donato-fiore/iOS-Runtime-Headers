// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCALENDARPRESENTER_H
#define SXCALENDARPRESENTER_H

@class NSString;
@protocol EKEventEditViewDelegate, SXCalendarPresenter, SXViewControllerPresenting;

#import <Foundation/Foundation.h>

#import "SXEventStoreProvider.h"

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXEventStoreProvider *eventStoreProvider; // ivar: _eventStoreProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXViewControllerPresenting> *viewControllerPresenting; // ivar: _viewControllerPresenting


-(id)initWithViewControllerPresenting:(id)arg0 eventStoreProvider:(id)arg1 ;
-(void)eventEditViewController:(id)arg0 didCompleteWithAction:(NSInteger)arg1 ;
-(void)presentCalendarEvent:(id)arg0 ;


@end


#endif