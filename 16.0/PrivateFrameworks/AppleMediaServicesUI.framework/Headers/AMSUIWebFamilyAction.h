// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBFAMILYACTION_H
#define AMSUIWEBFAMILYACTION_H

@class ACAccount, NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebFamilyAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dictionaryFromLookupResult:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif