// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBSUBSCRIPTIONACTION_H
#define AMSUIWEBSUBSCRIPTIONACTION_H

@class NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebSubscriptionAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (nonatomic) NSInteger cachePolicy; // ivar: _cachePolicy
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL extendedCarrierCheck; // ivar: _extendedCarrierCheck
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif