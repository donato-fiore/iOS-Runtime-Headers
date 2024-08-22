// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBMETRICSACTION_H
#define AMSUIWEBMETRICSACTION_H

@class NSString, NSArray;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebMetricsAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *events; // ivar: _events
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldFlush; // ivar: _shouldFlush
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif