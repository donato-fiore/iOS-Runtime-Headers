// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (nonatomic) BOOL sensitive; // ivar: _sensitive
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(unsigned char)_logTypeFromLevel:(NSInteger)arg0 ;


@end


#endif