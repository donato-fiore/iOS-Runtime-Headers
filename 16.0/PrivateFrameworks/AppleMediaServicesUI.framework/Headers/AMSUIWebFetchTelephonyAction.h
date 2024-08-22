// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBFETCHTELEPHONYACTION_H
#define AMSUIWEBFETCHTELEPHONYACTION_H



#import "AMSUIWebAction.h"

@interface AMSUIWebFetchTelephonyAction : AMSUIWebAction

@property (nonatomic) BOOL suppressPhoneNumber; // ivar: _suppressPhoneNumber


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif