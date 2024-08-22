// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBFETCHCARDDATAACTION_H
#define AMSUIWEBFETCHCARDDATAACTION_H

@class NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebFetchCardDataAction : AMSUIWebAction

@property (retain, nonatomic) NSString *merchantID; // ivar: _merchantID
@property (retain, nonatomic) NSString *storeFrontCountryCode; // ivar: _storeFrontCountryCode


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif