// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBACTION_H
#define AMSUIWEBACTION_H

@class NSArray, AMSMetricsEvent, NSString;
@protocol AMSUIWebActionRunnable;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"

@interface AMSUIWebAction : NSObject <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSArray *acceptedResponseVersions; // ivar: _acceptedResponseVersions
@property (readonly, nonatomic) AMSMetricsEvent *actionEvent; // ivar: _actionEvent
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif