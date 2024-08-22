// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBOPENURLACTION_H
#define AMSUIWEBOPENURLACTION_H

@class NSURL, NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebOpenURLAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(id)_openIgnoringOverrides:(id)arg0 ;
+(id)_openUniversalLink:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif