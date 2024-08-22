// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBOPENFAMILYCIRCLEACTION_H
#define AMSUIWEBOPENFAMILYCIRCLEACTION_H

@class NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebOpenFamilyCircleAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif