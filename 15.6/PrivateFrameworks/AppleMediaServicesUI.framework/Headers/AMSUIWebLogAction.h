// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBLOGACTION_H
#define AMSUIWEBLOGACTION_H

@class NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebLogAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger level; // ivar: _level
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(unsigned char)_logTypeFromLevel:(NSInteger)arg0 ;


@end


#endif