// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBCALLBACKACTION_H
#define AMSUIWEBCALLBACKACTION_H

@class NSDictionary, NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebCallbackAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif